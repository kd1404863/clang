#include<stdio.h>
main()
{
	int s, c = 1;
	printf("数を入れて:");
	scanf("%d", &s);
	for (s; c <= 5; c++) {
		printf("%d ",s*c);
	}
}