#include<stdio.h>
main()
{
	int s, c=0, g=0;
	printf("”‚ÍH");
	scanf("%d", &s);
	for (; s != -999; ) {
		g += s;
		c++;
		printf("”‚ÍH");
		scanf("%d", &s);
	}
	if (s != 0) {
		printf("‡Œv=%d\t•½‹Ï=%.2f", g, (float)g / c);
	}
}