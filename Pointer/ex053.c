#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa = &a, * pb = &b,*w;
	printf("���s�O:*pa=%d\t*pb=%d\n", *pa, *pb);
	w = pa;				//pa=�A�h���X1000
	pa = pb;			//pb=�A�h���X1004
	pb = w;
	printf("���s��:*pa=%d\t*pb=%d\n", *pa, *pb);
}