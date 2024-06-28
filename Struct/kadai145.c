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
	struct fruit syohin[] = { { "peach",300,5,3,0 },{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	int i, j,total=0;
	for (i = 0; i != END; i++) {
		printf("è§ïiñº: \t%s\n",syohin[i].name);
		printf("âøäi: \t\t%dâ~\t",syohin[i].price);
		printf("Ç®ä©Çﬂìx:");
		for (j = 0; j < syohin[i].point; j++) {
			printf("Åö");
		}
		while (j < 5) {
			printf("Åô");
			j++;
		}
		printf("\nå¬êî: \t\t%då¬\t",syohin[i].number);
		syohin[i].total = syohin[i].price*syohin[i].number;
		printf("ã‡äz: \t\t\\%d-\n\n",syohin[i].total);
		total += syohin[i].total;
	}
	printf("çáåvã‡äz=\\%d-\n", total);
}