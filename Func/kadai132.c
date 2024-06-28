#include<stdio.h>
main()
{
	int s,sum=0,i=0;
	printf("®”(^Z‚ÅI—¹)?");
	while (scanf("%d", &s) != EOF) {
		sum += s;
		i++;
		printf("\n®”(^Z‚ÅI—¹)?");
	}
	printf("‡Œv=%d\n•½‹Ï=%.1f\n", sum, (float)sum / i);
}