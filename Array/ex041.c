#include<stdio.h>
main()
{
	float  g, box[3];
	int c;
	for (g=0,c = 0; c < 3;c++) {
		printf("実数を入力:");
		scanf("%f", &box[c]);
		g += box[c];
	}
	printf("合計は%.2fです\n", g);
	printf("平均は%.2fです\n", g / c);
}