#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* pa, * pb;

	pa = &a;
	pb = &b;
	printf("���s�O:a=%d\tb=%d\n", a, b);
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("���s��:a=%d\tb=%d\n", a, b);
}