#include<stdio.h>
main()
{
	int a = 100, b;
	int * pa;
	pa = &a;			//	�A�h���X�̃Z�b�g
	b = *pa;
	printf("a=%d b=%d *p_a=%d\n", a, b, *pa);
}