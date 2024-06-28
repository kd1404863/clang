#include<stdio.h>
main()
{
	int s1, s2;
	printf("®”?");
	scanf("%d", &s1);
	printf("®”?");
	scanf("%d", &s2);
	if (s1 == s2) {
		printf("s1‚Æs2‚Í“™‚µ‚¢\n");
	}
	else {
		if (s1 < s2) {
			printf("s1‚Ì•û‚ªs2‚æ‚è%d¬‚³‚¢\n", s1 - s2);
		}
		else {
			printf("s1‚Ì•û‚ªs2‚æ‚è%d‘å‚«‚¢\n", s1 - s2);
		}
	}
}