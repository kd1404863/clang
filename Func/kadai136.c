#include<stdio.h>
int sa(int d1, int d2);
main()
{
	int d1, d2;
	printf("“ñ‚Â‚Ì®”?");
	scanf("%d%d", &d1, &d2);
	printf("max=%d\n", sa(d1, d2));
}
int sa(int d1, int d2)
{
	if (d1 <= d2 ) {
		return(d2);
	}
	else {
		return(d1);
	}
}