#include<stdio.h>
main()
{
	int s;
	printf("����?");
	scanf("%d", &s);
	if (s == 0) {
		printf("���͒l�́u�[���v�ł�\n");
	}
	else {
		if (s >= 1) {
			printf("���͒l�́u�v���X�v�ł�\n");
		}
		else {
			printf("���͒l�́u�}�C�i�X�v�ł�\n");
		}
	}
}