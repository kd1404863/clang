#include<stdio.h>
main()
{
	int s, sum=0, i=0;
	printf("����:");
	while ( scanf("%d", &s) != -1) {
		sum += s;
		i++;
		printf("����:");
	}
	printf("���v=%d\t����=%.2f\n", sum, (float)sum / i);
}