#include<stdio.h>
void hyoji(int su, char moji1);

main()
{
	int s;
	char moji;
	printf("ï∂éö?");
	scanf("%c", &moji);
	printf("êÆêî?");
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