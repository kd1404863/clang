#include<stdio.h>
main()
{
	int s;
	printf("西暦を入力:");
	scanf("%d", &s);
	if (s<1988) {
		printf("昭和生まれです");
	}
	else {
		printf("平成生まれです");
	}
}