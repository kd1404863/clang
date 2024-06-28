#include<stdio.h>
#include<string.h>
#define END 8
void syou(int* pb);
void kou(int* pa);

main()
{
	char s[100];
	int a[] = { 10,25,7,45,2,100,3,70,50 },b,i;
	printf("ソート前\n");
	for (i = 0; i < END; i++) {
		printf(" %d", a[i]);
	}
	printf("\nソート方法(0:昇順1:降順)?");
	scanf("%s", &s);
	printf("\nソート後\n");
	if (strcmp(s,"降順")==0) {
		kou(a);
	}else if (strcmp(s,"昇順")==0) {
		syou(a);
	}
	
	for (i = 0; i < END; i++) {
		printf(" %d", a[i]);
	}
}

void kou(int* pa)
{
	int w,i,j;
	for (i = 0; i < END; i++) {
		for (j = i + 1; j < END; j++) {
			if (pa[i] < pa[j]) {
				w = pa[i];
				pa[i] = pa[j];
				pa[j] = w;
			}
		}
	}
}
void syou(int* pb)
{
	int w, i, j;
	for (i = 0; i < END; i++) {
		for (j = i + 1; j < END; j++) {
			if (pb[i] > pb[j]) {
				w = pb[i];
				pb[i] = pb[j];
				pb[j] = w;
			}
		}
	}
}