#include<stdio.h>
main()
{
	char moji;
	printf("1•¶Žš“ü—Í?");
	scanf("%c", &moji);
	if ('A'<=moji && moji <= 'Z') {
		printf("%c\n", moji + 0x20);
	}
	else {
		if ('a'<=moji && moji <= 'z') {
			printf("%c\n", moji - 0x20);
		}
		else {
			printf("%c\n", moji);
		}
	}
}