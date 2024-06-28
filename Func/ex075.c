#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int *sk, int *syo);

main()
{
	int a, b, c, d, e,f;
	printf("数値1?");
	scanf("%d", &a);
	printf("数値2?");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	hyouji();
	printf("wa=%d sa=%d seki=%d syo=%d\n", c, d, e, f);
}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)//引数あり、戻り値なし
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}
hyouji() {
	puts("数値1と数値2の四則演算");//引数なし、戻り値なし
}