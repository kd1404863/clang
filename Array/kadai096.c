#include<stdio.h>
main()
{
	int c[10];
	int i, s,t;
	printf("���������");
	scanf("%d", &s);
	for (i = 0,t=0; s != -999; i++,t++) {
		if (i > 10) {
			break;
		}
		else {
			c[i] = s;
			printf("���������");
			scanf("%d", &s);
		}
	}
	if (i == 0) {
		printf("��������͂��Ă�������\n");
	}
	else {
		printf("�z��c=");
		for (i = 0; i < t; i++) {
			printf(" %d", c[i]);
		}
	}
}