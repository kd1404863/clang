#include<stdio.h>
main()
{
	int s;
	printf("0����100�܂ł̐���?");
	scanf("%d", &s);
	if (s > 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v\n");
	}
	else {
		if (s >= 80) {
			printf("���̐��l�̔��茋�ʂ́u4�v\n");
		}
		else {
			if (s >= 50) {
				printf("���̐��l�̔��茋�ʂ́u3�v\n");
			}
			else {
				if (s >= 30) {
					printf("���̐��l�̔��茋�ʂ́u2�v");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u1�v\n");
				}
			}
		}
	}
}