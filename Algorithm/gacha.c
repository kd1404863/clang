#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu,i,s,SR=0,R=0;
	srand(time(0));
	printf("何回?");
	scanf("%d", &s);
	for (i = 0; i <s ; i++) {
		kazu = rand() % 100 + 1;
		if (kazu < 12) {
			printf("スーパーレア ");
			SR++;
		}
		else {
			printf("レア ");
			R++;
		}
	}
	printf("\nスーパーレア:%d レア:%d\n", SR, R);
}