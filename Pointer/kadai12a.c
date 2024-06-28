#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 },i;
	int* p=a;
	printf("---é¿çsëO---\n");
	printf("a[]=");
	for (i = 0; a[i]!=0; i++,p++) {
		printf(" %2d", a[i]);
	}
	printf("\nb[]=");
	for (i = 0; b[i]!=0; i++) {
		printf(" %2d", b[i]);
	}
	printf("\n");
	for (i = 0; b[i] !=0 ; i++) {
		p--;
		b[i] = *p;
	}
	printf("\n---é¿çså„---\n");
	printf("a[]=");
	for (i = 0;a[i]!=0; i++, p++) {
		printf(" %2d", a[i]);
	}
	printf("\nb[]=");
	for (i = 0;b[i]!=0; i++) {
		printf(" %2d", b[i]);
	}
	printf("\n");
}