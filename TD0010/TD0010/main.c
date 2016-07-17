#include <stdio.h>
#include <string.h>

#include "comm.h"
#include "mycfg.h"


void Print()
{
	printf("AppID:%s\n", gCfg.AppId);
	printf("OptUsr:%s\n", gCfg.OptUsr);
	printf("Organ:%s\n", gCfg.Organ);
	printf("TradeDate:%s\n", gCfg.TradeDate);
}

void PrintEx()
{

}
// Test



int main(int argc, char **argv)
{
	
	td0010("appid", "Y010");
	td0010("optusr", "admin");
	td0010("organ", "1010");
	td0010("tradedate", "20161010");

	Print();
	printf("-----------------------\n");
	td0011("appid", "Y011");
	td0011("optusr", "admin");
	td0011("organ", "1011");
	td0011("tradedate", "20161111");
	
	Print();
	printf("-----------------------\n");
	td0011("appid", "Y012");
	td0011("optusr", "admin");
	td0011("organ", "1012");
	td0011("tradedate", "20161212");

	Print();
	return 0;
}


