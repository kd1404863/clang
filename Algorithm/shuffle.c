#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, work, target;
	int data[20];
	for (i = 0; i < 20; i++)
	{
		data[i]=1+i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d]=%2d\n", i, data[i]);
	}

	srand(time(0));
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;

		work =data[i] ;
		data[i] = data[target];
		data[target] = work;

	}
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d]=%2d\n", i, data[i]);
	}
}