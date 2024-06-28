#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット小文字?");
	scanf("%c", &moji);
	moji++;
	for (moji; moji <= 'z'; moji++)
	{
		printf("%c ", moji);
	}
}