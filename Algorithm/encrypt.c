#include<stdio.h>
main()
{
	int i;
	char s[20];
	i = 0;
	printf("���������͂��Ă��������B");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("�Í����������%s\n", s);
}