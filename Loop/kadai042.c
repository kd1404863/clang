#include<stdio.h>
main()
{
	int s,gokei;
	s = 1;
	gokei = 0;
	while (gokei < 1) {
		printf("%d", s);
		gokei += s;
		s++;
	}
	while (gokei <= 300) {
		printf("+%d", s);
		gokei += s;
		s++;
	}
	printf("=%d\n", gokei);
}