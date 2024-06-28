#include<stdio.h>
main()
{
	int i, k;
	while (1) {
		printf("®”1?");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("®”2?");
		scanf("%d", &k);
		if (k == -999) {
			break;
		}
		if(k == 0) continue;
		printf("%d/%d=%d ‚ ‚Ü‚è %d\n", i, k, i / k, i % k);
	}
}