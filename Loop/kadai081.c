#include<stdio.h>
main()
{
	int s, sum=0,i=0;
	printf("®”?");
	scanf("%d", &s);
	while (1) {
		if (s == -999) {
			break;
		}
		sum += s;
		i++;
		printf("®”?");
		scanf("%d", &s);
	}
	printf("‡Œv=%d\n•½‹Ï=%.3f\n", sum, (float)sum / i);
}