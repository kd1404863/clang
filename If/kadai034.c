#include<stdio.h>
main()
{
	char moji;
	printf("1��������?");
	scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z') {
		printf("�啶���ł�\n");
	}
	else {
		if ('a' <= moji && moji <= 'z') {
			printf("�������ł�\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}