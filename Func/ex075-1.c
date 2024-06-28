/*ex075改造版*/
#include<stdio.h>
void shisoku(int* wa, int* sa, int *sk, int *syo);
int kiku();
main()
{
	int  c, d, e,f;
	int atai;
	atai = kiku();
	shisoku(&c, &d, &e, &f);
	hyouji();
	printf("wa=%d sa=%d seki=%d syo=%d\n", c, d, e, f);
}
void shisoku(int* wa, int* sa, int* sk, int* syo)//引数あり、戻り値なし
{
	*wa = return a +return b ;
	*sa = return a - return b;
	*sk = return a * return b;
	*syo = return a / return b;
	return;
}
hyouji() {
	puts("数値1と数値2の四則演算");//引数なし、戻り値なし
}
kiku() {
	int a, b;
	printf("数値1?");
	scanf("%d", &a);
	printf("数値2?");
	scanf("%d", &b);
	return a, b;
}