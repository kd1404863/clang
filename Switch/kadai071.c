#include<stdio.h>
main()
{
	int s, t;
	char moji;
	printf("®”1=");
	scanf("%d", &s);
	
	printf("®”2=");
	scanf("%d", &t);
	
	printf("‰‰Zq?");
	scanf(" %c", &moji);

	switch (moji) {
		case'+':printf("%d + %d=%d\n", s, t, s + t);
			break;
		case'-':printf("%d - %d=%d\n", s, t, s - t);
			break;
		case'*':printf("%d * %d=%d\n", s, t, s * t);
			break;
		case'/':printf("%d / %d=%d\n", s, t, s / t);
			break;
		default:printf("%d / %d=%d\n", s, t, s % t);
	}
}