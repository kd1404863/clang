/*ex080QÆ*/
#include<stdio.h>
#define END 7
int max1(int* p);
int mini1(int* q);

main()
{
	int data[] = { 6,10,8,2,9,5,1,7 },max,mini;
	max = max1(data);
	printf("Å‘å’l=%d\n", max);
	mini = mini1(data);
	printf("Å¬’l=%d\n", mini);

}
int max1(int* p)
{
	int i,max;
	for (max=p[0], i = 1; i < END; i++) {
		if (max < p[i]) {
			max = p[i];
		}
	}
	return max;
}
int mini1(int* q)
{
	int i, mini;
	for (i = 1, mini = q[0]; i < END; i++) {
		if (mini > q[i]) {
			mini = q[i];
		}
	}
	return mini;
}