#include<stdio.h>
main()
{
	int i;
	char moji[] = "GameSoft";
	printf("文字列=");
	for (i = 0; moji[i] != '\0'; i++) {
		printf("%c", moji[i]);
	}
	printf("\n文字数=%d文字\n",i);
}