#include<stdio.h>
char sa(char moji);
main()
{
	char moji;
	int i;
	printf("�A���t�@�x�b�g1����?");
	scanf("%c", &moji);
	printf("�߂�l��");
	if (sa(moji) == 1) {
		printf("%d�Ȃ̂ő啶���ł�\n", sa( moji));
	}
	else {
		printf("%d�Ȃ̂ŏ������ł�\n", sa( moji));
	}
}
char sa(char moji)
{
	if (moji>='a'&&'z'>moji) {
		return(0);
	}
	else {
		return(1);
	}
}
