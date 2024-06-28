#include<stdio.h>
main()
{
	char moji[] = "mikan", moji2[100];
	char* p_moji=moji;
	int i=0;
	printf("コピー前");
	while (*p_moji) {
		putchar(*p_moji);
		moji2[i] = *p_moji++;
		i++;
	}
	printf("\nコピー後");
	for (i = 0; moji2[i] != '\0'; i++) {
		putchar(moji2[i]);
	}
	putchar('\n');
}