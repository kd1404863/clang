#include<stdio.h>
main()
{
	int s1, s2;
	printf("����?");
	scanf("%d", &s1);
	printf("����?");
	scanf("%d", &s2);
	if (s1 == s2) {
		printf("s1��s2�͓�����\n");
	}
	else {
		if (s1 < s2) {
			printf("s1�̕���s2���%d������\n", s1 - s2);
		}
		else {
			printf("s1�̕���s2���%d�傫��\n", s1 - s2);
		}
	}
}