#include<stdio.h>
main()
{
	int s;
	printf("西暦を入力:");
	scanf("%d", &s);
	if (s % 4 == 0) {
		printf("閏年です");
	}
	else {
		printf("閏年ではない");
	}
}