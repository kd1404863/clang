#include<stdio.h>
void hyoji(char* pa, char*pb);//��������A�߂�l�Ȃ�

main()
{
	char a[100], b[100];
	printf("�z��a:");
	scanf("%s", &a);
	printf("�z��b:");
	scanf("%s", &b);
	hyoji(a, b);
	printf("�z��a=%s\n", a);
}
void hyoji(char* pa,char *pb)
{
	int i, j;
	for (i = 0; *pa!= '\0'; i++) {
		pa++;
	}
	for (j = 0; j <= i; j++) {
		*pa = *pb;
		pa++;
		pb++;
	}
	putchar('\0');
}
/*�ϐ����g��Ȃ�����*/
/*
void hyoji(char*pa,char*pb)
{
	for(;*pa!='\0';pa++);
	
	for(;pb!='\0';pa++,pb++){
		*pa=*pb;
	}
	*pa='\0';
}/
