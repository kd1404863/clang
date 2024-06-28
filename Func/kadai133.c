#include<stdio.h>
main()
{
	int max=0, min=0, s;
	printf("®”(^Z‚ÅI—¹)?");
	while (scanf("%d", &s) != EOF) {
		if (s > max) {
			max = s;
		}
		if (s < min) {
			min = s;
		}
		printf("®”(^Z‚ÅI—¹)?");
	}
	printf("max=%d\nmini=%d\n", max, min);
}