#include<stdio.h>
int add(int a, int b); int low(int a, int b);//main�̒��ɂ͏����Ȃ�
main()//���o�͐�p
{
	int a, b, kotae,hiki;
	printf("����������");
	scanf("%d %d", &a, &b);
	printf("���v=%d�ł�\n",add(a,b));
	printf("��=%d�ł�\n",low(a,b));
	printf("��=%d�ł�\n", kake(a, b));
	printf("��=%d�ł�\n", waru(a, b));
}
int add(int a, int b)//�v�Z��p�Bmain�Ƃ͕ʕ���
{
	return(a+b);	
}
int low(int a, int b)
{
	return(a - b);
}
int kake(int a, int b)
{
	return(a * b);
}
int waru(int a, int b)
{
	return(a / b);
}
