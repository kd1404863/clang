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
	printf("�R�[�X��?");
	scanf("%s", &seito.kurasu);
	printf("���Ȃ�?");
	scanf("%s", &seito.kyouka);
	printf("�P�ʂ�?");
	scanf("%d", &seito.tanni);
	p = &seito;
	printf("�R�[�X��:%s\n",p->kurasu );
	printf("���Ȗ�:%s\n", p->kyouka);
	printf("�P�ʐ�:%d\n",p->tanni );
}