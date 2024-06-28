#include<stdio.h>
main()
{
	float a, b;
	printf("2‚Â‚ÌÀ”’lH");
	scanf("%f %f", &a, &b);
	printf("***%.2f‚Æ%.2f‚Ìl‘¥‰‰Z***\n", a, b);
	printf("˜a=%.2f ·=%.2f Ï=%.2f ¤=%.2f", a + b, a - b, a * b, a / b);
}