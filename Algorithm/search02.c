#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	int i, s;
	printf("’T¸’l‚ð“ü—Í");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++)
	{
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("d[%d]‚Å%d‚ð”­Œ©!\n", i, s);
	}
}