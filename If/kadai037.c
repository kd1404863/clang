#include<stdio.h>
main()
{
	int s;
	printf("0から100までの整数?");
	scanf("%d", &s);
	if (s > 90) {
		printf("その数値の判定結果は「5」\n");
	}
	else {
		if (s >= 80) {
			printf("その数値の判定結果は「4」\n");
		}
		else {
			if (s >= 50) {
				printf("その数値の判定結果は「3」\n");
			}
			else {
				if (s >= 30) {
					printf("その数値の判定結果は「2」");
				}
				else {
					printf("その数値の判定結果は「1」\n");
				}
			}
		}
	}
}