#include<stdio.h>
struct syohin_data {		//�\���̐錾
	char name[20];
	int tanka;
};
/*��������A�߂�l�Ȃ�*/
void display1(int a);		//�v���g�^�C�v�錾
void display2(struct syohin_data syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };
	display1(a);
	display2(syohin);
}

void display1(int a)
{
	printf("a=%d\n", a);
		/*�߂�l�Ȃ���return���ȗ�*/
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n", syohin.name, syohin.tanka);
		/*�߂�l�Ȃ���return���ȗ�*/
}