#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit syohin = { "peach",300,5,3,0 };
	int i;
	printf("è§ïiñº: \t%s\n", syohin.name);
	printf("âøäi: \t\t%d\n", syohin.price);
	printf("Ç®ä©Çﬂìx:\t");
	for (i = 0; i < syohin.point; i++) {
		printf("Åô");
	}
	printf("\nå¬êî: \t\t%d\n", syohin.number);
	syohin.total = syohin.price * syohin.number;
	printf("ã‡äz: \t\t%d-\n", syohin.total);
}