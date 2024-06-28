#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
/*引数あり、戻り値なし*/
void display1(struct syohin_data *p);

main()
{
	struct syohin_data syohin = {"ケシゴム",50};
	struct syohin_data* p = &syohin;
	display1(p);			/*アドレス取得*/
}
void display1(struct syohin_data *p)
{
	printf("%s %d\n", p->name, p->tanka);
}