#include<stdio.h>
main()
{
	int su;
	printf("整数？");
	scanf("%d", &su);
	if (su % 2 == 0) {
		printf("この整数は「偶数」です");
	}
	else {
		printf("この整数は「奇数」です");
	}
}