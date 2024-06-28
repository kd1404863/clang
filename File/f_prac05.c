#include<stdio.h>
#define Map_Num 3	//�}�b�v�̐�
#define W 10			//�}�b�v�̉�
#define H 5		//�}�b�v�̏c
typedef struct
{
	int m_map[H][W];
}Map;
//�֐��v���g�^�C�v�錾
void SetMap(char* filename, Map* m);
//�}�b�v�f�[�^��\������֐�
void DrawMap(Map m);
main()
{
	//�}�b�v�̃f�[�^���Ǘ�����\����
	Map MapData;

	//�}�b�v�f�[�^�̔z�u���������e�L�X�g�t�@�C���̖��O
	char* MapFileName[Map_Num] = { "map0.txt","map1.txt","map2.txt" };
	int select;	//�\������}�b�v�̔ԍ�����

	printf("�}�b�v�f�[�^(0,1,2)>");
	scanf("%d", &select);
	if (select < Map_Num&&select>=0) {
				SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
}
void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
	}
	else
	{
		printf("�ǂݍ��݃G���[�ł�\n");
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("��");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}