#include<stdio.h>
int gokei1(int* p);
int gokei2(int tbl[]);

main()
{
	int a[] = { 10,20,30,40,-999 }, gokei;
	gokei = gokei1(a);
	printf("gokei1=%d\n", gokei);
	gokei = gokei2(a);
	printf("gokei2=%d\n", gokei);
}
int gokei1(int* p)
{
	int gokei = 0;
	while (*p != -999) {
		gokei += *p;
		p++;
	}
	return(gokei);
}
int gokei2(int tbl[])
{
	int i = 0, gokei = 0;
	//•Ê‰ð
	while (*tbl != -999)
	{
		gokei += *tbl;
		tbl++;
	}
	/*while(tbl[i] != -999) {
		gokei += tbl[i];
		i++;
	}*/
	return(gokei);
}