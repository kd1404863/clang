#include<stdio.h>
main()
{
	char moji;
	int s;
	printf("10�i��?");
	scanf("%d", &s);
	printf("�A���t�@�x�b�g(o ro h or d)");
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
	default:printf("(o or h or d)�݂̂���͂��Ă�������\n");
	}
}