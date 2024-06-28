#include<stdio.h>
main()
{
	char c, * pc = &c;
	printf("ˆê•¶š–Ú‚ğ“ü—Í?");
	scanf("%c", &c);
	printf("Ÿ‚Ì•¶š‚Í%c‚Å‚·B\n", *pc+=1);
}