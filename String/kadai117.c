#include<stdio.h>
main()
{
	char day[][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;
	for (i = 0; i < 7; i++) {
			puts(day[i]);
	}
}