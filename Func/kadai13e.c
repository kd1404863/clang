#include<stdio.h>
#define END 8
void hikaku(int* pa);

main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	hikaku(a);
}
void hikaku(int* pa)
{
	int i,max,mini;
	max = *pa;
	mini = *pa;
	printf("”z—ñ‚Ì“à—e\n");
	for (i = 0; i < END; i++) {
		printf(" %d", *pa++);
		if (max < *pa) {
			max = *pa;
		}
		if (mini > *pa) {
			mini = *pa;
		}
	}
	printf("\nmax=%d\tmin=%d\n", max, mini);
}