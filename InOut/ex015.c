#include<stdio.h>
main()
{
	int no, no2,goukei;
	printf("１つ目の整数:");
	scanf("%d", &no);
	printf("２つ目の整数:");
	scanf("%d", &no2);
	goukei = no + no2;
	printf("合計は%dです\n", goukei);
}