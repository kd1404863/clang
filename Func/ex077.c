#include<stdio.h>
void hikaku(int x, int y, int z, int* m, int* w);//引数あり、戻り値なし
void hyouji();//引数なし、戻り値なし
main()
{
	int a, b, c, max, wast;
	hyouji();
	scanf("%d%d%d", &a, &b, &c);
	hikaku(a, b, c, &max, &wast);
	printf("最大値=%d　最小値=%d\n", max, wast);
}
void hyouji() {
	printf("整数を3つ入力:");
}
void hikaku(int x, int y, int z, int* m,int* w)
{
	*m = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*w = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
}