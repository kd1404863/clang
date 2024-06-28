#include<stdio.h>
main()
{
	int s, g, c;
	g = 0;
	c = 0;
	printf("®”?");
	scanf("%d", &s);
	while (s != -999) {
		g += s;
		c++;
		printf("®”?");
		scanf("%d", &s);
	}
		printf("‡Œv=%d\n", g);
		printf("•½‹Ï=%.2f\n", (float)g / c);
}