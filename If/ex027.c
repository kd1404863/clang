#include<stdio.h>
main()
{
	char m;
	printf("���������:");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("�ϊ������%c\n", m + 0x20);
		/*�啶�����珬������*/
	}
	else{
		if (m >= 'a' && m <= 'z') {
			printf("�ϊ������%c\n", m - 0x20);
			/*����������啶����*/
		}
		else {
			printf("�G���[\n");
		}
    }
}