#include<stdio.h>
#define END 3
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit syohin[3] = { { "peach",300,5,3,0 },{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	struct fruit *p=&syohin[0];
	int i,j,total=0;
	for (i = 0; i != END; i++,p++) {
		printf("���i��: \t%s\n", p->name);
		printf("���i: \t\t%d�~\t", p->price);
		printf("�����ߓx:\t%d�|�C���g\n",p->point);
		printf("\n��: \t\t%d��\t", p->number);
		p->total = p->price * p->number;
		printf("���z: \t\t\\%d-\n\n", p->total);
		total += p->total;
	}
	printf("���v���z=\\%d-\n", total);
}