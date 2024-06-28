#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"–kŠC“¹",NULL},{2,"ÂXŒ§",NULL},{3,"ŠâŽèŒ§",NULL},{4,"‹{éŒ§",NULL},{5,"H“cŒ§",NULL},{6,"ŽRŒ`Œ§",NULL},{7,"•Ÿ“‡Œ§",NULL},{END,"",NULL} };
	struct ken* p , * pw ;
	
	//ƒŠƒ“ƒN‚ÌÝ’è
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	p = data;		//ƒ|ƒCƒ“ƒ^P‚ð”z—ñ‚Ìæ“ªƒAƒhƒŒƒXi–kŠC“¹j‚É
	p->next = p+6;	//–kŠC“¹‚Ìnextƒƒ“ƒo‚ð6‚Âæ‚Ì•Ÿ“‡‚ÌƒAƒhƒŒƒX‚Ö
	pw = data;
	pw += 3;
	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = pw; p->code != END; p = p->next) {
		printf("%d ", p);
		printf("code=%d name=%s", p->code, p->name);
		printf("%d\n", p->next);
	}

}