#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	int i, s;
	printf("探査値を入力");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++)
	{
	}
	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("d[%d]で%dを発見!\n", i, s);
	}
}