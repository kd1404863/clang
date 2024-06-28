#include<stdio.h>
main()
{
	int s, g,k;
	printf("”‚ÍH");
	scanf("%d", &s);
	k = s + 1;
	do {
		g = 0;
		do {
			printf("*");
			g++;
		} while (k!=g+s);
		printf("\n");
		s--;
	} while (s > 0);
}