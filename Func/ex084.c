#include<stdio.h>
void hyoji(char* p, char* q);

main()
{
	char moji[100],moji2[100];
	printf("•¶Žš—ñ?");
	scanf("%s", &moji);
	hyoji(moji,moji2 );
	printf("moji1:%s\n", moji);
	printf("moji2:%s\n", moji2);
}
void hyoji(char* p,char *q) {
	int i, j;
	for (j = 0; *(p+1) != '\0'; j++) {
		p++;
	}
	for (i = 0; i <= j; i++) {
		*q = *p;
		q++;
		p--;
	}
	*q = '\0';
}