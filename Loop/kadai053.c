#include<stdio.h>
main()
{
	int i,s,gokei;
	printf("®”?");
	scanf("%d", &s);

	for (i = 0,gokei=0; i <= 10; i++) {
		gokei = s+i;
		printf("%d ", gokei);
	}
}