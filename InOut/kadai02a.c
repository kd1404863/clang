#include<stdio.h>
main()
{
	float a, b;
	printf("2�̎����l�H");
	scanf("%f %f", &a, &b);
	printf("***%.2f��%.2f�̎l�����Z***\n", a, b);
	printf("�a=%.2f ��=%.2f ��=%.2f ��=%.2f", a + b, a - b, a * b, a / b);
}