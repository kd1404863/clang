#include<stdio.h>
main()
{
	int a = 100, b;
	int * pa;
	pa = &a;			//	アドレスのセット
	b = *pa;
	printf("a=%d b=%d *p_a=%d\n", a, b, *pa);
}