#include<stdio.h>
#define END 3
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit syohin[3] = { { "peach",300,5,3,0 },{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	struct fruit *p=&syohin[0];
	int i,j,total=0;
	for (i = 0; i != END; i++,p++) {
		printf("商品名: \t%s\n", p->name);
		printf("価格: \t\t%d円\t", p->price);
		printf("お勧め度:\t%dポイント\n",p->point);
		printf("\n個数: \t\t%d個\t", p->number);
		p->total = p->price * p->number;
		printf("金額: \t\t\\%d-\n\n", p->total);
		total += p->total;
	}
	printf("合計金額=\\%d-\n", total);
}