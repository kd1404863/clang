#include<stdio.h>
#define Sol_Num 3

//構造体宣言
typedef struct {
	char wname[20];	//武器名
	int bullet;		//弾数
	float atk;		//攻撃力
}weapon;
typedef struct {
	char name[20];	//隊員名
	int hp;			//隊員HP
	weapon wpn;		//武器構造体変数
}soldier;

//プロトタイプ宣言
void setinfo(soldier* s, char* filename);
void display(soldier* s);

main()
{
	//構造体変数の宣言
	soldier sols[Sol_Num];//sols[0],sols[1],sols[2]
	//関数の呼び出し
	setinfo(sols, "file04.txt");
	display(sols);
}
void setinfo(soldier* s, char* filename)
{
	//ファイルポインタの宣言
	FILE* fp;
	//ファイルオープン、戻り値NULLならエラー表示。"r"は読み込みモード
	if (fp = fopen(filename, "r")) {
		for (int i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s + i)->hp, (s + i)->wpn.wname,
											&(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("読み込みエラー\n");
	}
}
void display(soldier* s)
{
	for (int i = 0; i < Sol_Num; i++) {
		printf("%s\t体力:%d\n", (s + i)->name, (s + i)->hp);
		printf("武器:%s\t弾数:%d\t攻撃力:%.2f\n", (s + i)->wpn.wname, 
									(s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}