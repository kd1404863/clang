#include<stdio.h>
main()
{
	char* pgame[3] = { "wii","ds","playstation4" };
	int i,j;
	char** p;
	p = pgame;
	for (i = 0; i < 3; i++) {
		 {
			printf(" %c", **p);
		}
	}
}