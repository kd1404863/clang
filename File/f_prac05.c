#include<stdio.h>
#define Map_Num 3	//マップの数
#define W 10			//マップの横
#define H 5		//マップの縦
typedef struct
{
	int m_map[H][W];
}Map;
//関数プロトタイプ宣言
void SetMap(char* filename, Map* m);
//マップデータを表示する関数
void DrawMap(Map m);
main()
{
	//マップのデータを管理する構造体
	Map MapData;

	//マップデータの配置を書いたテキストファイルの名前
	char* MapFileName[Map_Num] = { "map0.txt","map1.txt","map2.txt" };
	int select;	//表示するマップの番号入力

	printf("マップデータ(0,1,2)>");
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
		printf("読み込みエラーです\n");
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("■");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}