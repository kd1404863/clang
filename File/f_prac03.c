#include<stdio.h>
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
void display(soldier s);

main()
{
	//�\���̕ϐ��̐錾
	soldier sol;
	//�֐��̌Ăяo��
	setinfo(&sol, "fire03.txt");
	display(sol);

}
void setinfo(soldier* s, char* filename)
{
	//�t�@�C���|�C���^�̐錾
	FILE* fp;
	//�t�@�C���I�[�v���A�߂�lNULL�Ȃ�G���[�\���B"r"�͓ǂݍ��݃��[�h
	if (fp = fopen(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
}
void display(soldier s)
{
	printf("%s\t�̗�:%d\n", s.name, s.hp);
	printf("����:%s\t�e��:%d\t�U����:%.2f\n", s.wpn.wname, s.wpn.bullet, s.wpn.atk);
}