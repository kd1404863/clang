#include<stdio.h>
main()
{
	int s, g, h, t;
	printf("”‚ÍH");
	scanf("%d", &s);
	t = s + 1;
	do {
		g = 0;
		h = 0;
		do {
			printf(" ");
			g++;
		} while (g < s);
			do {
				printf("*");
				h++;
			} while (h + g < t);
				printf("\n");
				s--;
	} while (s > 0);
}