#include "TableDriven.h"
#include <stdio.h>
#include <string.h>

//�ж����ý��
void AnalyzingDS(pDS ds)
{
	if (ds->ResultCode == -1)
	{
		printf("û�и�������:%s\n", ds->Value);
	}
	else
	{
		printf("%s����Ϊ%s�ɹ�\n", ds->Key, ds->Value);
	}
	printf("�����������\n");
}

// ���ñ����
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

// ���ò���
void Setting(pDS ds)
{
	SetTable(ds);
	AnalyzingDS(ds);
}