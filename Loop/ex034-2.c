#include<stdio.h>
main()
{
	int s,g;
	printf("���́H");
	scanf("%d", &s);
	do {
		g = 0;
		do {
			printf("*");
			g++;
		} while (g < 5);
		printf("\n");
		s--;
	} while (s > 0);
}