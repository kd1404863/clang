#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl = &tbl[0][1], i;	//'&'��t����΍D���Ȕz�񂩂�n�߂邱�Ƃ��\
	for (i = 0; i < 3; i++) {
		printf(" %d ", *ptbl);	//�A�h���X�̒��g��\��
		ptbl += 3;				//�A�h���X��int�^(4�o�C�g)������
	}
}