#include<stdio.h>
main()
{
	char* pride[3] = { "car","bus","shinkansen" };
	//pride[0]="car"
	//pride[1]="bus"
	//pride[2]="shinkansen"
	int i;
	for (i = 0; i < 3; i++) {
		printf("%s\n", pride[i]);
	}
}