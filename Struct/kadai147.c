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
			printf("データの追加を行います\n");
			p += d;
			printf("番号>");
			scanf("%d", &p->no);
			printf("名前>");
			scanf(" %s", &p->name);
			printf("色>");
			scanf(" %s", &p->color);
			d++;
		}
		if (s == '3') {
			printf("登録されているデータの検索を行います。\n");
			printf("検索番号(1,番号 :2,名前 :3,色)>");
			scanf("%d", &b);
			if (b == 1) {
				printf("検索する番号");
				scanf("%d", &u);
				for (i = 0; i < d; i++, p++) {
					if (u == p->no) {
						hyouji(p);
					}
				}
			}
			if (b == 2) {
				printf("検索する名前>");
				scanf(" %s", n);
				for (i = 0; i < d; i++, p++) {
					if (strcmp(n, p->name) == 0) {
						hyouji(p);
					}
				}
			}
			if (b == 3) {
				printf("検索する色>");
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
		printf("番号>%d\t", p->no);
		printf("名前>%s\t", p->name);
		printf("色>%s\n", p->color);
}
hyoji()
{
	printf("処理メニュー(Xの入力で終了します)\n");
	printf("1:データ  2:データ追加  3:データ検索  処理は?");
}
int kiku()
{
	char a;
	scanf(" %c", &a);
	return a;
}