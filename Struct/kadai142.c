#include<stdio.h>
struct data {
	char kurasu[100];
	char kyouka[100];
	int tanni;
};

main()
{
	struct data seito;
	struct data* p;
	printf("コースは?");
	scanf("%s", &seito.kurasu);
	printf("教科は?");
	scanf("%s", &seito.kyouka);
	printf("単位は?");
	scanf("%d", &seito.tanni);
	p = &seito;
	printf("コース名:%s\n",p->kurasu );
	printf("教科名:%s\n", p->kyouka);
	printf("単位数:%d\n",p->tanni );
}