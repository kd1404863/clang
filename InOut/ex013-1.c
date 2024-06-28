#include<stdio.h>
main()
{
	char moji, moji2;
	moji = '5', moji2 = '6';
	printf("%c*%c=%d\n", moji, moji2, (moji - 0x30) * (moji2 - 0x30));
}