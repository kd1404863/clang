#include<stdio.h>
void get_sumavg(int w, int x, int* y, float* z);//関数プロトタイプ宣言
//引数あり、戻り値なし

main()
{
	int a, b, sum;
	float  avr;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);

	get_sumavg(a, b, &sum, &avr);
	
	printf("合計は、%d、平均は、%.2f\n", sum, avr);
}
void get_sumavg(int w, int x, int* y, float* z)
{
	*y = w + x;
	*z = *y / 2.0;
	return;
}