#include<stdio.h>
main()
{
	int s, sum,i;
	i = 0;
	sum = 0;
	do {
		printf("®”H");
		scanf("%d", &s);
		if (s != -999) {

		sum += s;
		i++;
		}
	} while (s != -999);
	printf("‡Œv=%d\n", sum);
	printf("•½‹Ï=%.2f\n", (float)sum / i);
}