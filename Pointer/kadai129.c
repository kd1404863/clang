#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 },i=0,w;
	int* pa = a, * pb = b;
	printf("---実行前---\n");
	printf("配列a[]=");
	while (*pa != 0) {
		printf(" %2d", *pa++);
	}
	pa = a;
	printf("\n配列b[]=");
	while (*pb != 0) {
		printf(" %2d", *pb);
		w = *pa;
		*pa = *pb;
		*pb = w;
		pa++;
		pb++;
	}
	pa = a;
	pb = b;
	printf("\n---実行後---\n");
	printf("配列a[]=");
	while (*pa != 0) {
		printf(" %2d", *pa++);
	}
	pa = a;
	printf("\n配列b[]=");
	while (*pb != 0) {
		printf(" %2d", *pb++);
	}
}