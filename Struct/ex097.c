#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"kCΉ",NULL},{2,"ΒX§",NULL},{3,"βθ§",NULL},{4,"{ι§",NULL},{5,"Hc§",NULL},{6,"R`§",NULL},{7,"§",NULL},{END,"",NULL} };
	struct ken* p , * pw ;
	
	//NΜέθ
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	p = data;		//|C^PπzρΜζͺAhXikCΉjΙ
	p->next = p+6;	//kCΉΜnextoπ6ΒζΜΜAhXΦ
	pw = data;
	pw += 3;
	//NΜ\¦
	for (p = pw; p->code != END; p = p->next) {
		printf("%d ", p);
		printf("code=%d name=%s", p->code, p->name);
		printf("%d\n", p->next);
	}

}