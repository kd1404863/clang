#include<stdio.h>
main()
{
	float no;
	printf("実数を入れて:");
	scanf("%f", &no);
	printf("2倍すると%.2f\n", no * 2.0);
	printf("３倍すると%.2f\n", no * 3.0);
}