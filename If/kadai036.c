#include<stdio.h>
main()
{
	int s1, s2;
	printf("整数?");
	scanf("%d", &s1);
	printf("整数?");
	scanf("%d", &s2);
	if (s1 == s2) {
		printf("s1とs2は等しい\n");
	}
	else {
		if (s1 < s2) {
			printf("s1の方がs2より%d小さい\n", s1 - s2);
		}
		else {
			printf("s1の方がs2より%d大きい\n", s1 - s2);
		}
	}
}