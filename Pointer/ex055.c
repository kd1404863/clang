#include<stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 },i,sum;
	int* pa=a;
	float b[4] = { 11.1,22.2,33.3,44.4 },g;
	float* pb=b;
	for (i = 0, sum = 0; i < 6; i++,pa++) {
		sum += *pa;
	}
	printf("�z��a\t���v=%d\t����=%.3f\n", sum, (float)sum / i);
	for (i = 0, g = 0; i < 4; i++,pb++) {
		g += *pb;
	}
	printf("�z��b\t���v=%.3f\t����=%.3f\n", g, g / i);
}