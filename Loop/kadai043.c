#include<stdio.h>
main()
{
	int s;
	printf("�����R�[�h?");
	scanf("%d", &s);
	while (s != -1) {
		printf("%c\n", s);
		printf("�����R�[�h?");
		scanf("%d", &s);
	}
}