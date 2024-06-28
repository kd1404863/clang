/*ex080参照*/
#include<stdio.h>
#include<string.h>
#define END 7
void up(int* p);
void down(int* q);

main()
{
	int data[] = { 6,10,8,2,9,5,1,7 },i;
	char moji[100];

	printf("ソート方向を入力:");
	gets(moji);

	if (strcmp(moji,"昇順")==0) { 
		up(data);
	}else if(strcmp(moji,"降順")==0) {
		down(data);
	}
	
	for (i = 0; i < END; i++) {
		printf("%d ", data[i]);
	}
}
void up(int* p) {
	int i,j, w;
	for (i = 0; i < END; i++) {
		for (j = i + 1; j < END; j++) {
			if (p[i] > p[j]) {
				w = p[i];
				p[i] = p[j];
				p[j] = w;
			}
		}
	}
}
void down(int* q) {
	int i, j, w;
	for (i = 0; i < END; i++) {
		for (j = i + 1; j < END; j++) {
			if (q[i] < q[j]) {
				w = q[i];
				q[i] = q[j];
				q[j] = w;
			}
		}
	}
}