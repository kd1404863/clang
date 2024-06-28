#include<stdio.h>
main()
{
	int i, s;
	s = 1;
	while (s <= 20)
	{
		i = 0;
		while (i < 10)
		{
			printf("%d ", s);
			i++;
			s++;
		}
		printf("\n");
	}
}