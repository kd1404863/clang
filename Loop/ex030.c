#include<stdio.h>
main()
{
	int s, c;
	c = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &s);
	while (c <= 10) {
		printf("%d+%d=%d\n", s, c, s + c);
		c++;
	}
}