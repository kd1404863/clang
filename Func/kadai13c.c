#include<stdio.h>
void suu(int* a, int* b);

main()
{
	int a=10, b=20;
	printf("実行前の値:\n");
	printf("a=%d b=%d\n",a,b);
	suu(&a,& b);
}
void suu(int* a, int* b)
{
	printf("実行後の値\n");
	printf("a=%d b=%d\n",*a+10,*b-10);
}