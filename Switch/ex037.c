#include<stdio.h>
main()
{
	char moji;
	printf("���Z�q������:");
	scanf("%c", &moji);
	switch (moji) {
		case'+':printf("���Z�ł�\n");
			break;
		case'-':printf("���Z�ł�\n");
			break;
		case'*':printf("��Z�ł�\n");
			break;
		case'/':printf("���Z�ł�\n");
			break;
		case'%':printf("���܂�ł�\n");
			break;
		default:printf("���̑��̕����ł�\n");
	}
}