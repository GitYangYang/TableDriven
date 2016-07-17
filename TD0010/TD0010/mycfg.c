#include "mycfg.h"
#include <string.h>


// C99 Not support vs2008, fuck!

Cfg gCfg = {0};

void SetAppId(const char * value){
	strcpy( gCfg.AppId, value);
}

void SetOptUsr(const char * value){
	strcpy(gCfg.OptUsr, value);
}

void SetOrgan(const char * value){
	strcpy(gCfg.Organ, value);
}

void SetTradDate(const char * value){
	strcpy(gCfg.TradeDate, value);
}

CfgRecord globaltable[] = {

	{ "appid", SetAppId},
	{ "optusr", SetOptUsr},
	{ "organ", SetOrgan},
	{ "tradedate", SetTradDate}
};
int iCount = sizeof(globaltable) / sizeof(globaltable[0]);



NCR gNcr[] = {
	{ "appid", gCfg.AppId},
	{ "optusr", gCfg.OptUsr},
	{ "organ", gCfg.Organ},
	{ "tradedate", gCfg.TradeDate}
};
int jCount = sizeof(gNcr) / sizeof(NCR);

// 指定初始化的方法，C99标准
MCR gMcr[] = {
	{.key = "appid", .pointer = gCfg.AppId},
	{ .key = "optusr", .pointer = gCfg.OptUsr},
	{ .key = "organ", .pointer = gCfg.Organ},
	{ .key = "tradedate", .pointer = gCfg.TradeDate}
};
int kCount = sizeof(gMcr) / sizeof(MCR);