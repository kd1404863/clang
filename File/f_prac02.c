#include<stdio.h>
main()
{
	int score = 0,max_score;
	char ch, name[20],max_name[20];
	FILE* fp;

	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("�ō����_ ���O:%s �n�C�X�R�A:%d\n", max_name, max_score);
	}
	else {
		printf("�t�@�C�����ǂݎ��܂���!\n");
		return;
	}

	printf("���O��������?");
	scanf("%s", name);
	while (1)		//for(;;){}�ł���
	{
		printf("���݂̃X�R�A:%d ('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
		if (score > max_score) {
			printf("���L�^�X�V��\n");
		}
	}
	if (score > max_score) {
		if (fp = fopen("score.txt", "w")) {
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("�n�C�X�R�A�X�V!!\n");
		}
		else {
			printf("�t�@�C���ɏ������߂܂���!\n");
			return;
		}
	}
	else {
		printf("���܂��撣�낤!!\n");
	}
}