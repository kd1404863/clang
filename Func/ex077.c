#include<stdio.h>
void hikaku(int x, int y, int z, int* m, int* w);//��������A�߂�l�Ȃ�
void hyouji();//�����Ȃ��A�߂�l�Ȃ�
main()
{
	int a, b, c, max, wast;
	hyouji();
	scanf("%d%d%d", &a, &b, &c);
	hikaku(a, b, c, &max, &wast);
	printf("�ő�l=%d�@�ŏ��l=%d\n", max, wast);
}
void hyouji() {
	printf("������3����:");
}
void hikaku(int x, int y, int z, int* m,int* w)
{
	*m = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*w = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
}