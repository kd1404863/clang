#include<stdio.h>
main()
{
	char moji;
	printf("������(^Z�ŏI��)?");
	while (scanf("%s", &moji) != EOF) {
		puts(&moji);
		printf("������(^Z�ŏI��)?");
	}
}