#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i,max,mini;
	printf("配列data=");
	for (i = 0; i < 10; i++) {
		printf(" %d", data[i]);
	}
	printf("\n");
	mini = data[0];
	max = data[0];
	for (i = 0; i < 10; i++) {
		if (max < data[i]) {
			max = data[i];
		}
		if (mini > data[i]) {
			mini = data[i];
		}
	}
	printf("最大値=%d\t最小値=%d\n", max, mini);
}