#include<stdio.h>
main()
{
	int i;
	char s[20];
	printf("暗号化文字列を入力");
	scanf("%c", &s[0]);
	i = 0;
	while (s[i] = '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	printf("複合化文字列は%s\n",s):
}