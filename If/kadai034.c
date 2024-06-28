#include<stdio.h>
main()
{
	char moji;
	printf("1•¶Žš“ü—Í?");
	scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z') {
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else {
		if ('a' <= moji && moji <= 'z') {
			printf("¬•¶Žš‚Å‚·\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}