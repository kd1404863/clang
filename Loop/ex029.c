#include<stdio.h>
main()
{
	int s, c=0;
	printf("数を入れて:");
	scanf("%d", &s);
	while (s > c) {
		printf("*");
		c++;
	}
}