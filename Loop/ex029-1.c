#include<stdio.h>
main()
{
	int s;
	printf("数を入れて:");
	scanf("%d", &s);
	while (s > 0) {
		printf("*");
		s--;
	}
}