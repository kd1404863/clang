#include<stdio.h>
main()
{
	int i, j;

	float gokei,x[3][2];
	for (i = 0; i < 3; i++) {
		for (j = 0, gokei = 0; j < 2; j++) {
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",i, gokei / 2);
	}
}