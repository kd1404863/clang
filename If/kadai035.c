#include<stdio.h>
main()
{
	int s;
	printf("整数?");
	scanf("%d", &s);
	if (s == 0) {
		printf("入力値は「ゼロ」です\n");
	}
	else {
		if (s >= 1) {
			printf("入力値は「プラス」です\n");
		}
		else {
			printf("入力値は「マイナス」です\n");
		}
	}
}