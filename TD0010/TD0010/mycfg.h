#ifndef _MYCFG_H
#define _MYCFG_H
#pragma warning(disable:4996)

typedef void (*pfn)(const char * value);

typedef struct _CfgRecord{
	char * key;
	pfn  func;
}CfgRecord, * pCfgRecord;


void SetAppId(const char * value);
void SetOptUsr(const char * value);
void SetOrgan(const char * value);
void SetTradDate(const char * value);

typedef struct _Cfg
{
	char AppId[12+1];
	char OptUsr[6+1];
	char Organ[4+1];
	char TradeDate[32+1];

}Cfg, *PCfg;

extern Cfg gCfg;

extern int iCount;
extern CfgRecord globaltable[];

typedef struct _NewCfgRecord{
	char Key[32+1];
	//struct Cfg *pCfg;
	char * pointer/*Value[64+1]*/;
}NCR, * pNCR;

extern int jCount;

extern NCR gNcr[];

typedef struct _NewLinuxCfgRecord{
	char key[32+1];
	char * pointer;
}MCR, * pMCR;

extern int kCount;

extern MCR gMcr[];

#endif



