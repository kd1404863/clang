#include<stdio.h>
main()
{
	char c, * pc = &c;
	printf("一文字目を入力?");
	scanf("%c", &c);
	printf("次の文字は%cです。\n", *pc+=1);
}