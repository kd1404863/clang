#include<stdio.h>
struct data {
	char kurasu[100];
	char kyouka[100];
	int tanni;
};
main()
{
	struct data seito1;
	strcpy(seito1.kurasu , "�Q�[���\�t�gI�R�[�X");
	strcpy(seito1.kyouka , "C����");
	seito1.tanni = 8;

	printf("�R�[�X��:%s\n",seito1.kurasu);
	printf("���Ȗ�:%s\n",seito1.kyouka);
	printf("�P�ʐ�:%d\n", seito1.tanni);
}