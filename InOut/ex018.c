#include<stdio.h>
main()
{
	int su, su2, su3, goukei;
	float heikin;
	printf("������3����:");
	scanf("%d%d%d", &su, &su2, &su3);
	goukei = su + su2 + su3;
	heikin = goukei / 3.0;
	printf("���v=%d\t ����=%.2f\n",goukei,heikin);
}