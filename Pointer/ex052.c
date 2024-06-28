#include<stdio.h>
main()
{
	int a = 100, b = 200,w;
	int* pa, * pb;

	pa = &a;
	pb = &b;
	printf("é¿çsëO:a=%d\tb=%d\n", a, b);
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("é¿çså„:a=%d\tb=%d\n", a, b);
}