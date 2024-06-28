#include<stdio.h>
main()
{
	int i;
	char moji[100];
	printf("•¶š—ñ‚Í?");
	scanf("%s", &moji);
	printf("•¶š—ñ=");
	for (i = 0; moji[i] != '\0'; i++) {
		printf("%c", moji[i]);
	}
	printf("\t•¶š”=%d•¶š\n", i);
}