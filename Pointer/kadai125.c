#include<stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 },i;
	int* pdata=data;
	printf("�|�C���^���Œ肵�ĕ\��\n�z�� data[]=");
	for (i = 0; *(pdata + i) != -999;i++) {
		printf(" %d", *(pdata+i));
	}
	pdata = data;
	printf("\n�|�C���^��ω������ĕ\��\n�z�� data[]=");
	while ( *pdata != -999) {
		printf(" %d", *pdata++);
	}
}