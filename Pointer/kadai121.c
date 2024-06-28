#include<stdio.h>
main()
{
	int i, j;
	i = 100, j = 10;
	int* p, * q;
	p = &i;
	q = &j;
	printf("%d+%d=%d\n", i, j, *p + *q);
	printf("%d-%d=%d\n", i, j, *p - *q);
	printf("%d*%d=%d\n", i, j, *p * *q);
	printf("%d/%d=%d\n", i, j, *p / *q);
}