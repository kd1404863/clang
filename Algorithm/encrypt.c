#include<stdio.h>
main()
{
	int i;
	char s[20];
	i = 0;
	printf("文字列を入力してください。");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("暗号化文字列は%s\n", s);
}