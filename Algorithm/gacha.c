#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu,i,s,SR=0,R=0;
	srand(time(0));
	printf("����?");
	scanf("%d", &s);
	for (i = 0; i <s ; i++) {
		kazu = rand() % 100 + 1;
		if (kazu < 12) {
			printf("�X�[�p�[���A ");
			SR++;
		}
		else {
			printf("���A ");
			R++;
		}
	}
	printf("\n�X�[�p�[���A:%d ���A:%d\n", SR, R);
}