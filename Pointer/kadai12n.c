#include<stdio.h>
main()
{
	char* p_moji1="Nippon";
	int i;
	printf("‹t‡‘O:");
	for (i = 1; *p_moji1!='\0'; i++) {
		printf("%c", *p_moji1++);
	}
	printf("\n‹t‡‚É‚·‚é‚Æ");
	while (i > 0) {
		printf("%c", *p_moji1--);
		i--;
	}
	putchar('\n');
}