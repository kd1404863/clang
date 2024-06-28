#include<stdio.h>
main()
{
	char* p = "pointer test program";
	char moji[256];
	int i;
	for (i = 0; *p >= '\0'; i++,p++) {
		moji[i] = *p;
	}
	printf("”z—ñ[]:");
	for (i = 0; moji[i] != '\0'; i++) {
		printf("%c",moji[i]);
	}
	printf("\n");
}