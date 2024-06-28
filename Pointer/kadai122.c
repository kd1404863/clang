#include<stdio.h>
main()
{
	int a = 5, b = 30, wrk, * pa = &a, * pb = &b, * pwrk = &wrk;
	puts("é¿çsëO");
	printf("a=%d b=%d\n", *pa, *pb);
	pwrk = pa;
	printf("é¿çså„\n");
	pa = pb;
	pb = pwrk;
	printf("a=%d b=%d\n", *pa, *pb);
}