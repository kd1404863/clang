#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kogeki;
	srand (time(0));	//乱数の初期化
	kogeki=rand()%100+1;   //乱数シャッフル

	if (kogeki<=30) {
		printf("かいしんのいちげきだ!\n");
	}
	else {
		printf("通常攻撃\n");
	}
}