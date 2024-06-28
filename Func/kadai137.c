#include<stdio.h>
char sa(char moji);
main()
{
	char moji;
	int i;
	printf("アルファベット1文字?");
	scanf("%c", &moji);
	printf("戻り値は");
	if (sa(moji) == 1) {
		printf("%dなので大文字です\n", sa( moji));
	}
	else {
		printf("%dなので小文字です\n", sa( moji));
	}
}
char sa(char moji)
{
	if (moji>='a'&&'z'>moji) {
		return(0);
	}
	else {
		return(1);
	}
}
