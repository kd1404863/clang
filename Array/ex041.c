#include<stdio.h>
main()
{
	float  g, box[3];
	int c;
	for (g=0,c = 0; c < 3;c++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[c]);
		g += box[c];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", g);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", g / c);
}