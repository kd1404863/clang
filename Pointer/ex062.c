#include<stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * pdata1=data1;
	char data2[10], * pdata2=data2;
	while (*pdata1) {
		*pdata2 = *pdata1;
		*pdata1++;
		*pdata2++;
	}
	/*while(*pdata2++=*pdata1++);でもコピーされる。*/
	*pdata2 = '\0';

	pdata1 = data1;
	while (*p) {
		*pdata1 = *p;
		*p++;
		*pdata1++;
	}
	*pdata1 = '\n';
	printf("data1[]=%s\ndata2[]=%s\n", data1, data2);
}