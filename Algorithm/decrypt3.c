#include<stdio.h>
main()
{
	int  i,k[20];
	char s[20];
	i = 0;
	printf("���������͂��Ă�������>");
	scanf("%s", &s[0]);

	while (s[i] != '\0') {
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("������������ςݕ�����́A%s\n", s);
}