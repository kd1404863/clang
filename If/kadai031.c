#include<stdio.h>
main()
{
	float a, b;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%f %f", &a, &b);
	if (a < b) {
		printf("‘å‚«‚¢‚Ù‚¤‚Í=%.2f\n", b);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤‚Í=%.2f\n", a);
	}
}