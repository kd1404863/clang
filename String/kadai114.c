#include<stdio.h>
main()
{
	int i;
	char moji[100];
	printf("�������?");
	scanf("%s", &moji);
	printf("������=");
	for (i = 0; moji[i] != '\0'; i++) {
		printf("%c", moji[i]);
	}
	printf("\t������=%d����\n", i);
}