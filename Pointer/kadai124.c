#include<stdio.h>
main()
{
	char c, * pc = &c;
	printf("�ꕶ���ڂ����?");
	scanf("%c", &c);
	printf("���̕�����%c�ł��B\n", *pc+=1);
}