#include<stdio.h>
void display1(int n1);
void display2(int* n2);
main()
{
	int a, b;
	printf("���l�H:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("���l�H:");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}
void display1(int n1)
{
	printf("���la��%d�ł��B\n", n1);
	n1 += 10;
	return;
}
void display2(int* n2)
{
	printf("���lb��,%d�ł��B\n", *n2);
	*n2 += 10;
	return;
}