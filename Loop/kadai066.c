#include<stdio.h>
main()
{
	int i, sum;
	i = 1;
	sum = 0;

	printf("%d", i);
	sum += i;
	do {
		i++;
		printf("+%d", i);
		sum += i;
	} while (sum <= 300);
	printf("=%d\n", sum);
}