#include<stdio.h>
main()
{
	int i;
	char moji[] = "GameSoft";
	printf("������=");
	for (i = 0; moji[i] != '\0'; i++) {
		printf("%c", moji[i]);
	}
	printf("\n������=%d����\n",i);
}