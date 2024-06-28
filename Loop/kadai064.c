#include<stdio.h>
main()
{
	int i, s;
	s = 20;
	while (s >= 1)
	{
		i = 0;
		while (i < 10)
		{
			printf("%d ", s);
			i++;
			s--;
		}
		printf("\n");
	}
}