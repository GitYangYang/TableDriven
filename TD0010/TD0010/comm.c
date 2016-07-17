
#include "comm.h"
#include "mycfg.h"
#include <string.h>

int td0010(const char * name, const char * value)
{

	int i;
	BOOL FIND= FALSE;
	for(i = 0; i < iCount; i++)
	{
		if(strcmp(name, globaltable[i].key) == 0)
		{
			globaltable[i].func(value);
			FIND = TRUE;
		}
	}

	return FIND ? 0 : -1;

}

int td0011(const char * name, const char * value)
{
	int i;
	BOOL FIND= FALSE;
	for(i = 0; i < jCount; i++)
	{
		if(strcmp(name, gNcr[i].Key) == 0)
		{
			strcpy(gNcr[i].pointer, value);
			FIND = TRUE;
		}
	}

	return FIND ? 0 : -1;
}

int td0012(const char * name, const char * value)
{
	int i;
	BOOL FIND= FALSE;
	for(i = 0; i < kCount; i++)
	{
		if(strcmp(name, gMcr[i].key) == 0)
		{
			strcpy(gMcr[i].pointer, value);
			FIND = TRUE;
		}
	}

	return FIND ? 0 : -1;
}