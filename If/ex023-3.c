#include<stdio.h>
main()
{
	int s, s2, s3,k1,k2,k3,k4;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &s);
	printf("2‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &s2,&s3);
	k1 = s2 + s3;
	k2 = s2 - s3;
	k3 = s2 * s3;
	k4 = s2 / s3;
	if (s == 1) {
		printf("%d", k1);
	}
	else {
		if (s == 2) {
			printf("%d", k2);
		}
		else {
			if (s == 3) {
				printf("%d", k3);
			}
			else {
				if (s = 4) {
					printf("%d", k4);
				}
			}
		}
	}
}