#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"kCΉ",NULL},{2,"ΒX§",NULL},{3,"βθ§",NULL},{4,"{ι§",NULL},{5,"Hc§",NULL},{6,"R`§",NULL},{7,"§",NULL},{ END,"",NULL },{28,"ΊΙ§",NULL} };
	struct ken* p , * pw ;
	
	//NΜέθ
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	//|C^PΙdataΜζͺAhXikCΉjπγό
	p = data;
	//kCΉΜnextAhXπΊΙ§ΜAhXΙΟX
	p->next = p + 8;
	//ΊΙ§ΜnextAhXπΒX§ΜAhXΙΟX
	p += 8;
	p->next = p - 7;
	//NΜ\¦
	for (p =data; p->code != END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}