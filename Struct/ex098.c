#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"北海道",NULL},{2,"青森県",NULL},{3,"岩手県",NULL},{4,"宮城県",NULL},{5,"秋田県",NULL},{6,"山形県",NULL},{7,"福島県",NULL},{ END,"",NULL },{28,"兵庫県",NULL} };
	struct ken* p , * pw ;
	
	//リンクの設定
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	//ポインタPにdataの先頭アドレス（北海道）を代入
	p = data;
	//北海道のnextアドレスを兵庫県のアドレスに変更
	p->next = p + 8;
	//兵庫県のnextアドレスを青森県のアドレスに変更
	p += 8;
	p->next = p - 7;
	//リンクの表示
	for (p =data; p->code != END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}