#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 },i=0;
	int* pa = a;
	while (*pa != 0) {
		b[i] = *pa + b[i];
		i++;
		pa++;
	}
	printf("”z—ñb[]=");
	for (i = 0; b[i]!=0; i++) {
		printf(" %d", b[i]);
	}
}