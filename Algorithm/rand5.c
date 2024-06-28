#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, su;
	srand(time(0));
	

	for (i=0;i<100;i++)
	{
		su=rand()%300+1;

		printf("%3d ", su);
	
	}

}