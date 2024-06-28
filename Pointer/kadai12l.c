#include<stdio.h>
main()
{
	char moji[100];
	char* p_moji;
	int i;
	printf("•¶š—ñ?");
	gets(moji);
	p_moji = moji;
	for (i = 0; *p_moji != '\0'; i++, p_moji++);
	printf("•¶š”‚Í,%d•¶š‚Å‚·\n", i);
}