#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* pa, * pb;

	pa = &a;
	pb = &b;
	printf("実行前:a=%d\tb=%d\n", a, b);
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("実行後:a=%d\tb=%d\n", a, b);
}