//ビット処理（状態管理）
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3	// スキル
#define Mob_Num 3	// 敵の数
// 符号なし整数をUNITで再定義
typedef unsigned int UNIT;

typedef struct		// Skill構造体
{
	char name[20];	// スキル名
	int type;		// スキルの種類(0:ホイミ,1:バイキルト,2:)
	int use_MP;		// 消費MP量
	int effect;		// スキル効果
} Skill;

typedef struct		// Spec型構造体
{
	char name[20];	// 勇者の名前
	int hp;			// 勇者のHP
	int atk;		// 勇者の攻撃力
	int def;		// 勇者の防御力
	UNIT state;
}Spec;

typedef struct		// Chara型構造体
{
	Spec sp;		// Spec型構造体
	int maxhp;
	int mp;
	Skill skl[Skil_Num];
}Chara;

typedef struct		// Mob型構造体
{
	Spec sp;		// Spec型構造体
	int rate;
}Mob;

enum BitState		//列挙型宣言 
{
	Base = 0,		//00000000 通常攻撃
	Poison=1<<0,	//00000001 毒状態
	Sleep=1<<1,		//00000010 眠り状態
	Paralysis=1<<2,	//00000100 マヒ状態
	Burn=1<<3,		//00001000 やけど状態
	AtkUp=1<<4,		//00010000 攻撃力アップ状態
	AtkDown=1<<5	//00100000 攻撃力ダウン状態
};

typedef unsigned int UINT;//unsigned int...全ビットを2進数の各桁に対応させて格納。整数型

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT * s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)	// 現在の状態を表示
{
	printf("----現在の状態----\n");
	if (s & Poison)			// 結果が真ならば処理
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("マヒ\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("通常状態\n");
	}
	printf("-------------\n");
}

void ChangeFlag(UINT* s)	// 状態を付与する
{
	int a;
	while (1)
	{
		printf("どの状態にしますか?\n");
		printf("1:毒、2:眠り、3:マヒ、4:やけど、5:攻撃力アップ、6:攻撃力ダウン、0:終了\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) {

			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか？\n");
		printf("1:毒、2:眠り、3:マヒ、4:やけど、5:攻撃力アップ、6:攻撃力ダウン、7:全回復,0:終了\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) {

		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s =Base;
			break;
		}
	}
}