#include<stdio.h>
main()
{
	char moji;
	printf("•¶š—ñ(^Z‚ÅI—¹)?");
	while (scanf("%s", &moji) != EOF) {
		puts(&moji);
		printf("•¶š—ñ(^Z‚ÅI—¹)?");
	}
}