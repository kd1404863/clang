#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g������?");
	scanf("%c", &moji);
	moji++;
	for (moji; moji <= 'z'; moji++)
	{
		printf("%c ", moji);
	}
}