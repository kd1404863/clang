#include<stdio.h>
main()
{
	int a = 5, b = 30, wrk, * pa = &a, * pb = &b, * pwrk = &wrk;
	puts("実行前");
	printf("a=%d b=%d\n", *pa, *pb);
	pwrk = pa;
	printf("実行後\n");
	pa = pb;
	pb = pwrk;
	printf("a=%d b=%d\n", *pa, *pb);
}