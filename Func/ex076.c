#include<stdio.h>
void get_sumavg(int w, int x, int* y, float* z);//�֐��v���g�^�C�v�錾
//��������A�߂�l�Ȃ�

main()
{
	int a, b, sum;
	float  avr;
	printf("������2����:");
	scanf("%d%d", &a, &b);

	get_sumavg(a, b, &sum, &avr);
	
	printf("���v�́A%d�A���ς́A%.2f\n", sum, avr);
}
void get_sumavg(int w, int x, int* y, float* z)
{
	*y = w + x;
	*z = *y / 2.0;
	return;
}