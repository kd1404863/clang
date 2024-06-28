#include<stdio.h>
main()
{
	char moji;
	int s;
	printf("10進数?");
	scanf("%d", &s);
	printf("アルファベット(o ro h or d)");
	scanf(" %c", &moji);
	switch (moji) {
	case'o':
	case'O':printf("%o\n", s);
		break;
	case'h':
	case'H':printf("%x\n", s);
		break;
	case'd':
	case'D':printf("%d\n", s);
		break;
	default:printf("(o or h or d)のみを入力してください\n");
	}
}