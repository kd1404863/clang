#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit syohin = { "peach",300,5,3,0 };
	struct fruit *p=&syohin;
	printf("���i��: \t%s\n", p->name);
	printf("���i: \t\t%d\n", p->price);
	printf("�����ߓx:%d\n",p->point);
	printf("��: \t\t%d\n", p->number);
	p->total = p->price * p->number;
	printf("���z: \t\t%d-\n", p->total);
}