#include<stdio.h>
struct syohin_data {		//構造体宣言
	char name[20];
	int tanka;
};
/*引数あり、戻り値なし*/
void display1(int a);		//プロトタイプ宣言
void display2(struct syohin_data syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "ケシゴム",50 };
	display1(a);
	display2(syohin);
}

void display1(int a)
{
	printf("a=%d\n", a);
		/*戻り値なし＝return文省略*/
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n", syohin.name, syohin.tanka);
		/*戻り値なし＝return文省略*/
}