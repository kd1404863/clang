#include<stdio.h>
main()
{
	int goukei, ia;
	goukei = 0;

	printf("��������:");
	scanf("%d", &ia);

	while (ia != -999)
	{
		goukei += ia;
		printf("��������:");
		scanf("%d", &ia);
	}
	printf("���v=%d\n", goukei);
}