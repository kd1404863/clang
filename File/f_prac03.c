#include<stdio.h>
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
void display(soldier s);

main()
{
	//構造体変数の宣言
	soldier sol;
	//関数の呼び出し
	setinfo(&sol, "fire03.txt");
	display(sol);

}
void setinfo(soldier* s, char* filename)
{
	//ファイルポインタの宣言
	FILE* fp;
	//ファイルオープン、戻り値NULLならエラー表示。"r"は読み込みモード
	if (fp = fopen(filename, "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
}
void display(soldier s)
{
	printf("%s\t体力:%d\n", s.name, s.hp);
	printf("武器:%s\t弾数:%d\t攻撃力:%.2f\n", s.wpn.wname, s.wpn.bullet, s.wpn.atk);
}