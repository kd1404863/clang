#include<stdio.h>
void hyoji(int su, char moji1);

main()
{
	int s;
	char moji;
	printf("����?");
	scanf("%c", &moji);
	printf("����?");
	scanf("%d", &s);
	hyoji(s, moji);
}
void hyoji(int su, char moji1)
{
	int i;
	for (i = 0; i < su; i++) {
		printf("%c", moji1);
	}
	putchar('\n');
}