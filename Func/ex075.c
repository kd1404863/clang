#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int *sk, int *syo);

main()
{
	int a, b, c, d, e,f;
	printf("���l1?");
	scanf("%d", &a);
	printf("���l2?");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	hyouji();
	printf("wa=%d sa=%d seki=%d syo=%d\n", c, d, e, f);
}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)//��������A�߂�l�Ȃ�
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}
hyouji() {
	puts("���l1�Ɛ��l2�̎l�����Z");//�����Ȃ��A�߂�l�Ȃ�
}