#include<stdio.h>
main()
{
	int su, i;
	su = 20;
	do {
		i = 0;
		do {
			printf("%d ", su);
			su--;
			i++;
		} while (i < 10);
		printf("\n");
	} while (su >= 1);
}