#include<stdio.h>
main()
{
	int s;
	printf("整数?");
	scanf("%d", &s);
	while (s != -999) {
		printf("8進数=%o 16進数=%x\n", s, s);
		printf("整数?");
		scanf("%d", &s);
	}
}