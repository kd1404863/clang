#include<stdio.h>
main()
{
	int data[] = { 10,9,1,20,45,21,38,45,88 },i,max,min;
	int* p = data;
	max = *p;
	min = *p;
	for (i = 1; i < 9; i++) {
		if (max<*(p+i)) {
			max = *(p + i);
		}
		if (min > *(p + i)) {
			min = *(p + i);
		}
		
	}
	printf("最大値=%d\t最小値=%d\n",max,min);
}