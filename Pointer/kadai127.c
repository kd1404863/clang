#include<stdio.h>
main()
{
	float data[] = { 10.8,20.3,30.6,40.4,50.5 },sum;
	int i;
	float* pdata=data;
	printf("配列の内容\n");
	printf("配列 data[]=");
	for (i = 0,sum=0; i < 5; i++) {
		sum += *pdata;
		printf("%.3f ", *pdata++);
	}
	printf("\n合計=%.3f\n平均=%.3f\n", sum,sum/5.0);
}