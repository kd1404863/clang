#include<stdio.h>
main()
{
	int s , c = 0;
	for (s = 1; s <= 10; s++) {
		c += s;
		printf("1����%d�܂ł̘a=%d\n", s, c);
	}
}