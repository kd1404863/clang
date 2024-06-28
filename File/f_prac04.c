#include<stdio.h>
#define Sol_Num 3

//�\���̐錾
typedef struct {
	char wname[20];	//���햼
	int bullet;		//�e��
	float atk;		//�U����
}weapon;
typedef struct {
	char name[20];	//������
	int hp;			//����HP
	weapon wpn;		//����\���̕ϐ�
}soldier;

//�v���g�^�C�v�錾
void setinfo(soldier* s, char* filename);
void display(soldier* s);

main()
{
	//�\���̕ϐ��̐錾
	soldier sols[Sol_Num];//sols[0],sols[1],sols[2]
	//�֐��̌Ăяo��
	setinfo(sols, "file04.txt");
	display(sols);
}
void setinfo(soldier* s, char* filename)
{
	//�t�@�C���|�C���^�̐錾
	FILE* fp;
	//�t�@�C���I�[�v���A�߂�lNULL�Ȃ�G���[�\���B"r"�͓ǂݍ��݃��[�h
	if (fp = fopen(filename, "r")) {
		for (int i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s + i)->hp, (s + i)->wpn.wname,
											&(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("�ǂݍ��݃G���[\n");
	}
}
void display(soldier* s)
{
	for (int i = 0; i < Sol_Num; i++) {
		printf("%s\t�̗�:%d\n", (s + i)->name, (s + i)->hp);
		printf("����:%s\t�e��:%d\t�U����:%.2f\n", (s + i)->wpn.wname, 
									(s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}