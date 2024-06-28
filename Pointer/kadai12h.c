#include<stdio.h>
main()
{
	char moji[] ="kadai12h.c";
	char* p_moji=moji;
	while (*p_moji) {
		putchar(*p_moji++);
	}
	putchar('\n');
}