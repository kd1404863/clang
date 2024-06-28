#include<stdio.h>
main()
{
	char moji[100];
	int s,i,j;
	printf("‰ñ”‚Æ•¶š—ñ");
	scanf("%d ", &s);
	scanf(" %s", &moji[0]);
	for (i = 0; i < s; i++) {
		j = 0;
		 while(moji[j]!='\0') {
			 printf("%c", moji[j]);
			 j++;
		}
		 printf("\t");
	}
	printf("\n");
}