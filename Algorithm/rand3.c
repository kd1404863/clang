#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kogeki;
	srand (time(0));	//�����̏�����
	kogeki=rand()%100+1;   //�����V���b�t��

	if (kogeki<=30) {
		printf("��������̂���������!\n");
	}
	else {
		printf("�ʏ�U��\n");
	}
}