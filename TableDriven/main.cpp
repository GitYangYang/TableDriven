// TableDriven.cpp : 定义控制台应用程序的入口点。
//

#include "TableDriven.h"
#include <stdio.h>
#include <string.h>

Param Table[] = {
	{"AppId", ""},
	{"DocId", ""}
};


int table_size = sizeof(Table) / sizeof(Param);

int main(int argc, char* argv[])
{
	int iRet = 0;
	printf("%d\n", table_size); // 2
	
	DS ds1 = {"AppId", "Y002"};
	DS ds2 = {"DocId", "1234567890"};
	DS ds3 = {"xx", "123"};
	
	Setting(&ds1);
	Setting(&ds2);
	Setting(&ds3);
	

	// Display Table
	for(int i = 0; i < table_size; i++)
	{
		printf("%s:%s\n", Table[i].KeyName, Table[i].KeyValue);
	}
	return 0;
}

