#include<stdio.h>
main()
{
	int s , c = 0;
	for (s = 1; s <= 10; s++) {
		c += s;
		printf("1から%dまでの和=%d\n", s, c);
	}
}