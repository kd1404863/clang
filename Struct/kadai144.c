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
	printf("¤•i–¼: \t%s\n", p->name);
	printf("‰¿Ši: \t\t%d\n", p->price);
	printf("‚¨Š©‚ß“x:%d\n",p->point);
	printf("ŒÂ”: \t\t%d\n", p->number);
	p->total = p->price * p->number;
	printf("‹àŠz: \t\t%d-\n", p->total);
}