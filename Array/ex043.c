#include<stdio.h>
#include<string.h>
main()
{
	char box[] = "orange";
	int i;
	for (i = 0; box[i] != '\0'; i++) {
	}
	printf("������:%s\n", &box[0]);
	printf("��������%d����\n", i);
	printf("��������%d����\n", strlen(box));
}