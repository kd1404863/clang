#include<stdio.h>
main()
{
	char moji[100];
	char* p;
	int i;
	printf("������(^Z�ŏI��)?");
	while (scanf("%s", &moji) != EOF) {
		i = 1;
		p = moji;
		while (*(p + 1) != '\0') {
			p++;
			i++;
		}
		while (i > 0) {
			printf("%c", *p--);
			i--;
		}
		printf("\n������(^Z�ŏI��)?");
	}
}