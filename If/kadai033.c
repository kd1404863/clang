#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);
	if ('A'<=moji&&moji<='Z') {
		printf("大文字です\n");
	}
	else {
		printf("小文字です\n");
	}
}