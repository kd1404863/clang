#include<stdio.h>
#define size 5
main()
{
	int d[size] = { 30,7,25,16,10 };
	int i, j, w=0;
	printf("ソート前\n");
	for (i = 0; i < size; i++) {
		printf("d[%d]=%d\n", i, d[i]);
	}
	for (i = 4; i > 0;i--) {
		for (j = 0; j < i;j++) {
			if (d[j] > d[j + 1]) {
				w = d[j+1];
				d[j+1] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソース後\n");
	for (i = 0; i < size; i++) {
		printf("d[%d]=%d\n", i, d[i]);
	}
}