#include<stdio.h>
main()
{
	int  i;
	char s[20],k[20];
	i = 0;
	printf("���������͂��Ă�������>");
	scanf("%s", &s[0]);
	printf("�����L�[�����");
	scanf("%s", &k[0]);
	while (s[i] != '\0') {
		s[i] -= k[i]-'0';
		i++;
	}
	printf("������������ςݕ�����́A%s\n", s);
}