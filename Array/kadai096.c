#include<stdio.h>
main()
{
	int c[10];
	int i, s,t;
	printf("®”‚ğ“ü—Í");
	scanf("%d", &s);
	for (i = 0,t=0; s != -999; i++,t++) {
		if (i > 10) {
			break;
		}
		else {
			c[i] = s;
			printf("®”‚ğ“ü—Í");
			scanf("%d", &s);
		}
	}
	if (i == 0) {
		printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
	else {
		printf("”z—ñc=");
		for (i = 0; i < t; i++) {
			printf(" %d", c[i]);
		}
	}
}