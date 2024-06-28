#include<stdio.h>
main()
{
	int low, high,mid, s;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("’T¸’l‚ğ“ü—Í");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}
		if (s > d[mid]) {
			low = mid - 1;
		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("d[%d]‚Å%d‚ğ”­Œ©!\n", mid, s);
	}
}