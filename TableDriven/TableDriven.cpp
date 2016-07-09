#include "TableDriven.h"
#include <stdio.h>
#include <string.h>

//判断设置结果
void AnalyzingDS(pDS ds)
{
	if (ds->ResultCode == -1)
	{
		printf("没有该配置项:%s\n", ds->Value);
	}
	else
	{
		printf("%s设置为%s成功\n", ds->Key, ds->Value);
	}
	printf("参数设置完毕\n");
}

// 设置表参数
int SetTable(pDS ds)
{
	bool FIND = false;
	for (int i = 0; i < table_size; i++)
	{
		if (strcmp(Table[i].KeyName, ds->Key) == 0)
		{
			FIND = true;
			strcpy(Table[i].KeyValue, ds->Value);
			ds->ResultCode = 0;
			break;
		}
	}
	if (!FIND)
	{
		ds->ResultCode = -1;
		return -1;
	}
	return 0;
}

// 设置参数
void Setting(pDS ds)
{
	SetTable(ds);
	AnalyzingDS(ds);
}