#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力?");
	scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z') {
		printf("大文字です\n");
	}
	else {
		if ('a' <= moji && moji <= 'z') {
			printf("小文字です\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}