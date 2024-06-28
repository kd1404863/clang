#include<stdio.h>
main()
{
	int a[][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int w, * pa = a[0], * pb = b[0];
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++,pa++,pb++) {
			w = *pa;
			*pa = *pb;
			*pb = w;
		}
	}
	printf("”z—ña\n");
	for (pb=a[0],i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", *pb++);
		}
		putchar('\n');
	}
	printf("\n”z—ñb\n");
	for (pa=b[0],i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", *pa++);
		}
		putchar('\n');
	}
	putchar('\n');
}