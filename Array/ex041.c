#include<stdio.h>
main()
{
	float  g, box[3];
	int c;
	for (g=0,c = 0; c < 3;c++) {
		printf("���������:");
		scanf("%f", &box[c]);
		g += box[c];
	}
	printf("���v��%.2f�ł�\n", g);
	printf("���ς�%.2f�ł�\n", g / c);
}