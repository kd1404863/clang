#include<stdio.h>
void hyoji(char* p_moji1, char* p_moji2);

main()
{
	char moji[256] = "関数", moji2[] = "わかるかな?";
	hyoji(moji, moji2);
	printf("連結された後の文字列 moji1:%s\n", moji);
}
void hyoji(char* p_moji1, char* p_moji2)
{
	for (; *p_moji1!= '\0'; p_moji1++);
	for (; *p_moji2 != '\0'; p_moji2++,p_moji1++) {
		*p_moji1 = *p_moji2;
	}
	*p_moji1 = '\0';
}