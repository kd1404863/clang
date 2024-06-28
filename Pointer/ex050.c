#include<stdio.h>
main()
{
	int a = 100;
	int* pa;
	pa = &a;
	printf("a=%d &a=%d\npa=%d *pa=%d &pa=%d\n", a, &a, pa, *pa, &pa);
}