#include<stdio.h>
main()
{
	char moji1[100], moji2[100],moji3[200];
	int i,j;
	printf("•¶Žš—ñ1=");
	scanf("%s" ,& moji1);
	printf("•¶Žš—ñ2=");
	scanf("%s", &moji2);
	for (j=0,i = 0; moji1[i] != '\0'; i++,j++) {
		moji3[j] = moji1[i];
	}
	for (i = 0; moji2[i] != '\0'; i++, j++) {
		moji3[j] = moji2[i];
	}
	for (j = 0; moji3[j] != '\0'; j++) {
		printf("%c", moji3[j]);
	}
}