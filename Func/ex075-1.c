/*ex075������*/
#include<stdio.h>
void shisoku(int* wa, int* sa, int *sk, int *syo);
int kiku();
main()
{
	int  c, d, e,f;
	int atai;
	atai = kiku();
	shisoku(&c, &d, &e, &f);
	hyouji();
	printf("wa=%d sa=%d seki=%d syo=%d\n", c, d, e, f);
}
void shisoku(int* wa, int* sa, int* sk, int* syo)//��������A�߂�l�Ȃ�
{
	*wa = return a +return b ;
	*sa = return a - return b;
	*sk = return a * return b;
	*syo = return a / return b;
	return;
}
hyouji() {
	puts("���l1�Ɛ��l2�̎l�����Z");//�����Ȃ��A�߂�l�Ȃ�
}
kiku() {
	int a, b;
	printf("���l1?");
	scanf("%d", &a);
	printf("���l2?");
	scanf("%d", &b);
	return a, b;
}