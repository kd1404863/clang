#include<stdio.h>
#include<string.h>
int kiku();
void hyouji(struct animal* p);

struct animal {
	int no;
	char name[20];
	char color[20];
};

main()
{
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} };
	struct animal* p = data;
	int   u, i, d = 3,b;
	char n[20], c[20], s;
	hyoji();
	s = kiku();
	while (1) {
		if (s == '1') {
			for (i = 0; i < d; i++, p++) {
				hyouji(p);
			}
		}
		if (s == '2') {
			printf("�f�[�^�̒ǉ����s���܂�\n");
			p += d;
			printf("�ԍ�>");
			scanf("%d", &p->no);
			printf("���O>");
			scanf(" %s", &p->name);
			printf("�F>");
			scanf(" %s", &p->color);
			d++;
		}
		if (s == '3') {
			printf("�o�^����Ă���f�[�^�̌������s���܂��B\n");
			printf("�����ԍ�(1,�ԍ� :2,���O :3,�F)>");
			scanf("%d", &b);
			if (b == 1) {
				printf("��������ԍ�");
				scanf("%d", &u);
				for (i = 0; i < d; i++, p++) {
					if (u == p->no) {
						hyouji(p);
					}
				}
			}
			if (b == 2) {
				printf("�������閼�O>");
				scanf(" %s", n);
				for (i = 0; i < d; i++, p++) {
					if (strcmp(n, p->name) == 0) {
						hyouji(p);
					}
				}
			}
			if (b == 3) {
				printf("��������F>");
				scanf(" %s", c);
				for (i = 0; i < d; i++, p++) {
					if (strcmp(c, p->color) == 0) {
						hyouji(p);
					}
				}
			}
		}
		if (s == 'X')break;
		p = data;
		hyoji();
		s = kiku();
	}
}
void hyouji(struct animal* p)
{
		printf("�ԍ�>%d\t", p->no);
		printf("���O>%s\t", p->name);
		printf("�F>%s\n", p->color);
}
hyoji()
{
	printf("�������j���[(X�̓��͂ŏI�����܂�)\n");
	printf("1:�f�[�^  2:�f�[�^�ǉ�  3:�f�[�^����  ������?");
}
int kiku()
{
	char a;
	scanf(" %c", &a);
	return a;
}