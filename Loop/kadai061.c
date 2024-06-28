#include<stdio.h>
main()
{
	int s,i;
	s = 1;
	do {
		i = 0;
		do {
			printf("%d ", s);
			s++;
			i++;
		} while (i < 10);
		printf("\n");
	} while (s <= 20);
}