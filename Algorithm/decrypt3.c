#include<stdio.h>
main()
{
	int  i,k[20];
	char s[20];
	i = 0;
	printf("文字列を入力してください>");
	scanf("%s", &s[0]);

	while (s[i] != '\0') {
		printf("s[%d]の複合化キー>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("複合化文字列済み文字列は、%s\n", s);
}