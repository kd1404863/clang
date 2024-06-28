#include<stdio.h>
void hyoji(char* pa, char*pb);//引数あり、戻り値なし

main()
{
	char a[100], b[100];
	printf("配列a:");
	scanf("%s", &a);
	printf("配列b:");
	scanf("%s", &b);
	hyoji(a, b);
	printf("配列a=%s\n", a);
}
void hyoji(char* pa,char *pb)
{
	int i, j;
	for (i = 0; *pa!= '\0'; i++) {
		pa++;
	}
	for (j = 0; j <= i; j++) {
		*pa = *pb;
		pa++;
		pb++;
	}
	putchar('\0');
}
/*変数を使わない書式*/
/*
void hyoji(char*pa,char*pb)
{
	for(;*pa!='\0';pa++);
	
	for(;pb!='\0';pa++,pb++){
		*pa=*pb;
	}
	*pa='\0';
}/
