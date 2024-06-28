#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j,w=0;
	printf("ソート前\n");
	for (i = 0; i < 5; i++) {
		printf("d[%d]:%d\n",i, d[i]);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (d[j] < d[i]) {
				w = d[j];
				d[j] = d[i];
				d[i] = w;
			}
		}
	}
	printf("ソート後\n");
	for (i = 0; i < 5; i++) {
		printf("d[%d]:%d\n", i,d[i]);
	}
}