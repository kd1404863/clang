#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"kCΉ",NULL},{2,"ΒX§",NULL},{3,"βθ§",NULL},{4,"{ι§",NULL},{5,"Hc§",NULL},{6,"R`§",NULL},{7,"§",NULL},{28,"ΊΙ§",NULL} ,{ END,"",NULL } };
	struct ken* p , * pw ;
	
	//NΜέθ
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	//ΒX§ΜnextoΜlπ{ι§ΜAhXΙΟX
	p = data;/*|C^pΙdataΜζͺAhXπγό*/
	/*pπp’θΒX§ΜAhXπίι*/
	p++;
	/*ΒX§Μp->nextΙ{ι§ΜAhX(pπg€)πγό*/
	p->next = p+2;
	//NΜ\¦
	for (p =data; p->code != END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}