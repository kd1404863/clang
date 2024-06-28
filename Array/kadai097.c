#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10], i,j=0;
	printf("”z—ña=");
	for (i = 0;i < 10; i++) {
		printf(" %3d ", a[i]);
	}
	printf("\n”z—ñc=");
	while(i>0){
		i--;
		c[j] = a[i];
		printf(" %3d ", c[j]);
		j++;
	}
	printf("\n");
}