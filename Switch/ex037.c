#include<stdio.h>
main()
{
	char moji;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä:");
	scanf("%c", &moji);
	switch (moji) {
		case'+':printf("‰ÁZ‚Å‚·\n");
			break;
		case'-':printf("Œ¸Z‚Å‚·\n");
			break;
		case'*':printf("æZ‚Å‚·\n");
			break;
		case'/':printf("œZ‚Å‚·\n");
			break;
		case'%':printf("‚ ‚Ü‚è‚Å‚·\n");
			break;
		default:printf("‚»‚Ì‘¼‚Ì•¶š‚Å‚·\n");
	}
}