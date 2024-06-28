#include<stdio.h>
main()
{
	char moji[100];
	int i;
	printf("•¶Žš—ñ‚Í?");
	scanf("%s", &moji);
	for (i = 0; moji[i] != '\0'; i++) {
		putchar(moji[i]);
		putchar('\n');
	}
}