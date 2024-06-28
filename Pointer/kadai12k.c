#include<stdio.h>
main()
{
	char moji[] = "mikan to ringo";
	char* p_moji =moji;
	while (*p_moji) {
		if (*p_moji != ' ') {
			printf("%c",*p_moji);
		}
			p_moji++;
	}
	putchar('\n');
}