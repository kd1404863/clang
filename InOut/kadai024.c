#include<stdio.h>
main()
{
	int ia, ib;
	printf("2‚Â‚Ì®”H");
	scanf("%d %d", &ia, &ib);
	printf("***%d‚Æ%d‚Ìl‘¥‰‰Z***\n", ia, ib);
	printf("%d+%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%d\t‚ ‚Ü‚è%d", ia, ib, ia / ib, ia % ib);
}