#include<stdio.h>
main()
{
	float a, b;
	printf("2�̎����l?");
	scanf("%f %f", &a, &b);
	if (a < b) {
		printf("�傫���ق���=%.2f\n", b);
	}
	else {
		printf("�傫���ق���=%.2f\n", a);
	}
}