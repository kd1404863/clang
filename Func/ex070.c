#include<stdio.h>
int add(int a, int b); int low(int a, int b);//mainの中には書かない
main()//入出力専用
{
	int a, b, kotae,hiki;
	printf("整数を二つ入力");
	scanf("%d %d", &a, &b);
	printf("合計=%dです\n",add(a,b));
	printf("差=%dです\n",low(a,b));
	printf("積=%dです\n", kake(a, b));
	printf("商=%dです\n", waru(a, b));
}
int add(int a, int b)//計算専用。mainとは別部屋
{
	return(a+b);	
}
int low(int a, int b)
{
	return(a - b);
}
int kake(int a, int b)
{
	return(a * b);
}
int waru(int a, int b)
{
	return(a / b);
}
