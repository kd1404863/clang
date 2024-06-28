#include<stdio.h>
main()
{
	char moji1[] = "ringo";
	char moji2[100];
	char* p_moji=moji1;
	int i,j;
	printf("”z—ñ“à—e=");
	for (i = 0; *(p_moji+1)!='\0'; i++) {
		putchar(*p_moji++);
	}
	putchar(*p_moji);
	printf("\n‹t‡Œ‹‰Ê=");
	for (j = 0; j <= i;j++) {
		moji2[j] = *p_moji--;
		putchar(moji2[j]);
	}
	moji2[i] = '\0';
	putchar('\n');
}