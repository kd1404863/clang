#include<stdio.h>
main()
{
	int s;
	printf("文字コード?");
	scanf("%d", &s);
	while (s != -1) {
		printf("%c\n", s);
		printf("文字コード?");
		scanf("%d", &s);
	}
}