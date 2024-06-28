#include<stdio.h>
main()
{
	int  i;
	char s[20],k[20];
	i = 0;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s[0]);
	printf("•¡‡ƒL[‚ğ“ü—Í");
	scanf("%s", &k[0]);
	while (s[i] != '\0') {
		s[i] -= k[i]-'0';
		i++;
	}
	printf("•¡‡‰»•¶š—ñÏ‚İ•¶š—ñ‚ÍA%s\n", s);
}