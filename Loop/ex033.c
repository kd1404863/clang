#include<stdio.h>
main()
{
	int s, c=0, g=0;
	printf("数は？");
	scanf("%d", &s);
	for (; s != -999; ) {
		g += s;
		c++;
		printf("数は？");
		scanf("%d", &s);
	}
	if (s != 0) {
		printf("合計=%d\t平均=%.2f", g, (float)g / c);
	}
}