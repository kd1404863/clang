#include<stdio.h>
main()
{
	int s, g, c;
	g = 0;
	c = 0;
	printf("����?");
	scanf("%d", &s);
	while (s != -999) {
		g += s;
		c++;
		printf("����?");
		scanf("%d", &s);
	}
		printf("���v=%d\n", g);
		printf("����=%.2f\n", (float)g / c);
}