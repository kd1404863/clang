#include<stdio.h>
main()
{
	int s;
	printf("��������:");
	scanf("%d", &s);
	while (s > 0) {
		printf("*");
		s--;
	}
}