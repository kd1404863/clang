#include<stdio.h>
main()
{
	float moji1,moji2,moji3,goukei, heikin;
	printf("�P�ڂ̎���:");
	scanf("%f", &moji1);
	printf("�Q�ڂ̎���:");
	scanf("%f", &moji2);
	printf("�R�ڂ̎���:");
	scanf("%f", &moji3);
	goukei = moji1 + moji2 + moji3;
	heikin = (float)goukei / 3;
	printf("���v��%.2f\t����=%.2f\n", goukei, heikin);
}