#include<stdio.h>
main()
{
	char* ptbl[4] = { "Programming2","Algorithm","Programming1","C" }, * pwork;
	int i, j;
	for (i = 0; i < 3; i++) {			//���X�g1��̏����͍s��Ȃ�
		for (j = i + 1; j < 4; j++) {
			if (strcmp(ptbl[i] ,ptbl[j])==1) {		//��r���Ɣ�r��B(��)���(��)�̕����������Ƃ�����1
				pwork = ptbl[i];			//����ւ�����
				ptbl[i] = ptbl[j];
				ptbl[j] = pwork;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n", ptbl[i]);
	}
}