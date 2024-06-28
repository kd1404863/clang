#include<stdio.h>
main()
{
	int  i;
	char moji;
	moji = ' ';
	while (moji < '~')
	{
		for (i = 0; i < 10 && moji < '~'; i++, moji++)
		{
			printf("%x%c ", moji, moji);
		} 
		printf("\n");
	}
}