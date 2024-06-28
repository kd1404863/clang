#include<stdio.h>
struct syohin_data {		//構造体タグ名
	char name[20];			//メンバーリスト
	int tanka;
};
main()
{
	struct syohin_data syohin;		/*int a;と同じ意味*/
	struct syohin_data* p;			/*int *p=&a;と同じ意味*/
	p = &syohin;					/*pはsyohin_data型のポインタなので"&"を付けてアドレス取得する*/
	printf("商品名=");
	scanf("%s", p->name);			/*->アロー演算子　ポインタ"->"メンバ名*/
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->name=%d\n", p->tanka);
	printf("syohin.name=%s\n", syohin.name);/*.ドット演算子　構造体変数"."メンバ名*/
	printf("syohin.tanka=%d\n", syohin.tanka);
}