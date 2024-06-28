#include<stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 },i;
	int* pdata=data;
	printf("ポインタを固定して表示\n配列 data[]=");
	for (i = 0; *(pdata + i) != -999;i++) {
		printf(" %d", *(pdata+i));
	}
	pdata = data;
	printf("\nポインタを変化させて表示\n配列 data[]=");
	while ( *pdata != -999) {
		printf(" %d", *pdata++);
	}
}