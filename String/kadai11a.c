#include<stdio.h>
main()
{
	char day[][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, j;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 3; j++) {
			putchar(day[i][j]);
		}
		putchar('\n');
	}
}