#include<stdio.h>
main()
{
	int s, c=0, g=0;
	printf("���́H");
	scanf("%d", &s);
	for (; s != -999; ) {
		g += s;
		c++;
		printf("���́H");
		scanf("%d", &s);
	}
	if (s != 0) {
		printf("���v=%d\t����=%.2f", g, (float)g / c);
	}
}