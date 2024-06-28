#include<stdio.h>
main()
{
	char *pride[3] = { "shinkansen","bus","car" };
	int i;
	for (i = 0; i < 3; i++) {
		while (*pride[i]) {
			putchar(*pride[i]++);
			putchar('\n');
		}
		putchar('\n');
	}
}