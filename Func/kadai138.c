#include<stdio.h>
void su(int kazu);
main()
{
	int s=0;
	printf("®”?");
	su(s);
}
void su(int kazu)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		printf("š");
	}
	printf("\n");
}