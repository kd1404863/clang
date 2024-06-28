#include<stdio.h>
main()
{
	int a = 50, b = 10,c;
	int* pa;
	pa = &a;
	c = b + *pa;
	printf("%d+%d=%d\n", a, b, c);
}