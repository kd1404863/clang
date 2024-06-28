#include<stdio.h>
main()
{
	int i, su;
	printf("    1 2 3 4 5 6 7 8 9\n");
	printf("=====================\n");
	for (i = 1; i < 10; i++)
	{
		printf("%d | ",i);
		for (su = 1; su < 10; su++)
		{
			printf("%d ", i * su);
		}
		printf("\n");
	}
}