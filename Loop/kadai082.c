#include<stdio.h>
main()
{
	int s, sum=0,i=0;
	while (1) {
		printf("®”?");
		scanf("%d", &s);
		if (s == -999) {
			break;
		}if (s < 0) {
			continue;
		}
		sum += s;
		i++;
	}
	printf("‡Œv=%d\n•½‹Ï=%.3f\n", sum, (float)sum / i);
}