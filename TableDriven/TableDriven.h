/*
 *  A example for solving too much "else if" which is limited in VS compiler.
 *
 *
 *	Author:	Yang Yang
 *	E-mail:	yjgyy@outlook.com
 *  Date:	10/07/2016
 *
 *
 */



#ifndef _PUBDEF_H
#define _PUBDEF_H
#pragma warning(disable:4996)

typedef struct DataSegment{
	char Key[16];
	char Value[32];
	int ResultCode;
}DS, *pDS;

typedef struct {
	char KeyName[16+1];
	char KeyValue[32+1];
}Param, *pParam;

extern Param Table[];
extern int table_size;

void AnalyzingDS(pDS ds);
void Setting(pDS);
#endif