#include<stdio.h>
#define TBL_END 5  //É}ÉNÉç
int gokei4(int* p);

main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = gokei4(a);
	printf("gokei=%d\n", gokei);
}
int gokei4(int* p)
{
	int gokei=0,i=0;
	while (i < TBL_END) {
		gokei += *(p + i);
		i++;
	}
	return gokei;
}