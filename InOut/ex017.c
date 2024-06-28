#include<stdio.h>
main()
{
	float moji1,moji2,moji3,goukei, heikin;
	printf("‚P‚Â–Ú‚ÌÀ”:");
	scanf("%f", &moji1);
	printf("‚Q‚Â–Ú‚ÌÀ”:");
	scanf("%f", &moji2);
	printf("‚R‚Â–Ú‚ÌÀ”:");
	scanf("%f", &moji3);
	goukei = moji1 + moji2 + moji3;
	heikin = (float)goukei / 3;
	printf("‡Œv%.2f\t•½‹Ï=%.2f\n", goukei, heikin);
}