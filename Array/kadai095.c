#include<stdio.h>
main()
{
	int a[] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i,sum;
	for (i = 0,sum=0; i < 10; i++) {
		sum += a[i];
	}
	printf("‡Œv=%d\t•½‹Ï=%d\n", sum, sum / i);
	for (i = 0,sum=0; i < 10; i++) {
		sum += b[i];
	}
	printf("‡Œv=%d\t•½‹Ï=%d\n", sum, sum / i);
}