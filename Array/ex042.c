#include<stdio.h>
main()
{
	char data[6];
	int i;
	data[0] = 'A';
	data[1] = 'p';
	data[2] = 'p';
	data[3] = 'l';
	data[4] = 'e';
	data[5] = '\0';
	printf("�ꕶ�����\��\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ŕ\��\n%s\n", &data[3]);
}