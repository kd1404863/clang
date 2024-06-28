#include<stdio.h>
main()
{
	int s, i;
	for (s = 1, i = 0; i < 20; i++, s++) {
		printf("%d ", s);
	}
	printf("\n");
	for (i = 0; i < 20; i++, s++) {
		printf("%d ", s);
	}
	printf("\n");
	for (i = 0; i < 20; i++, s++) {
		printf("%d ", s);
	}
}