#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
/*��������A�߂�l�Ȃ�*/
void display1(struct syohin_data *p);

main()
{
	struct syohin_data syohin = {"�P�V�S��",50};
	struct syohin_data* p = &syohin;
	display1(p);			/*�A�h���X�擾*/
}
void display1(struct syohin_data *p)
{
	printf("%s %d\n", p->name, p->tanka);
}