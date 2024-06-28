#include<stdio.h>
main()
{
	char moji1[128],moji2[128];
	char* p_moji1;
	int i;
	printf("•¶Žš—ñ1:");
	gets(moji1);
	printf("•¶Žš—ñ2:");
	gets(moji2);
	p_moji1 = moji1;
	while (*p_moji1) {
		p_moji1++;
	}
	for (i = 0; moji2[i] != '\0'; i++) {
		*p_moji1 = moji2[i];
		p_moji1++;
	}
	*p_moji1 = '\0';
	p_moji1 = moji1;
	for (i = 0; *p_moji1;i++) {
		moji1[i] = *p_moji1;
		p_moji1++;
	}
	printf("moji1:");
	for (i = 0; moji1[i] != '\0'; i++) {
		printf("%c", moji1[i]);
	}
	putchar('\n');
}