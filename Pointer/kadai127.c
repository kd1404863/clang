#include<stdio.h>
main()
{
	float data[] = { 10.8,20.3,30.6,40.4,50.5 },sum;
	int i;
	float* pdata=data;
	printf("�z��̓��e\n");
	printf("�z�� data[]=");
	for (i = 0,sum=0; i < 5; i++) {
		sum += *pdata;
		printf("%.3f ", *pdata++);
	}
	printf("\n���v=%.3f\n����=%.3f\n", sum,sum/5.0);
}