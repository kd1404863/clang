#include<stdio.h>
main()
{
	int s, g,su;
	printf("”‚ÍH");
	scanf("%d", &su);
	s = 1;
	do {
		g = 0;
		do {
			printf("*");
			g++;
		} while (g < s);
				printf("\n");
			s++;
	} while (s <= su);
}