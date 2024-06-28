#include<stdio.h>
main()
{
	int s, g;
	g = 0;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &s);
		if (s == -999)
		{
			break;
		}
		g += s;
	}
	printf("‡Œv=%d\n", g);
}