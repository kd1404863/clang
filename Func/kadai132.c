#include<stdio.h>
main()
{
	int s,sum=0,i=0;
	printf("����(^Z�ŏI��)?");
	while (scanf("%d", &s) != EOF) {
		sum += s;
		i++;
		printf("\n����(^Z�ŏI��)?");
	}
	printf("���v=%d\n����=%.1f\n", sum, (float)sum / i);
}