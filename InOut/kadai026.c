#include<stdio.h>
main()
{
	int s;
	printf("10進数の数値？");
	scanf("%d", &s);
	printf("8進数=%o\t16進数=%x", s, s);
}