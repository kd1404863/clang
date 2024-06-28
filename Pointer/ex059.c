#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* pdata, *pdata2;
	pdata = data;
	pdata2 = data2;
	printf("data[]=%s\n", pdata);
	while (*pdata2++ = *pdata++);	//•¶š—ñ‚ÌƒRƒs[
	pdata2 = data2;
	printf("data2[]=%s\n", pdata2);
	while (*pdata2) {
		putchar(*pdata2++);
	}
	putchar('\n');
}