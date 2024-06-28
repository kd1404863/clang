#include<stdio.h>
main()
{
	int c;
	char moji[1];
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets  (moji);
		c = getchar();
	}
}