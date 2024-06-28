#include<stdio.h>
void hyoji(char* p_moji1, char* p_moji2);

main()
{
	char moji[256] = "ä÷êî", moji2[] = "ÇÌÇ©ÇÈÇ©Ç»?";
	hyoji(moji, moji2);
	printf("òAåãÇ≥ÇÍÇΩå„ÇÃï∂éöóÒ moji1:%s\n", moji);
}
void hyoji(char* p_moji1, char* p_moji2)
{
	for (; *p_moji1!= '\0'; p_moji1++);
	for (; *p_moji2 != '\0'; p_moji2++,p_moji1++) {
		*p_moji1 = *p_moji2;
	}
	*p_moji1 = '\0';
}