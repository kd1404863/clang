#include<stdio.h>
struct syohin_data {		//\’ΜιΎ
	char name[20];
	int tanka;
};
/*ψ θAίθlΘ΅*/
void display1(int a);		//vg^CvιΎ
void display2(struct syohin_data syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "PVS",50 };
	display1(a);
	display2(syohin);
}

void display1(int a)
{
	printf("a=%d\n", a);
		/*ίθlΘ΅returnΆΘͺ*/
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n", syohin.name, syohin.tanka);
		/*ίθlΘ΅returnΆΘͺ*/
}