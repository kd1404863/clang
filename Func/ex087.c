#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int sum,a,b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a + b;
	printf("%d+%d=%d\n", a, b, sum);
}