#include<stdio.h>
main()
{
	char moji[100];
	char* p_moji;
	int i;
	printf("文字列?");
	gets(moji);
	p_moji = moji;
	for (i = 0; *p_moji != '\0'; i++, p_moji++);
	printf("文字数は,%d文字です\n", i);
}