#include<stdio.h>
void hyoji(char* p_moji1, char* p_moji2);

main()
{
	char moji[256] = "�֐�", moji2[] = "�킩�邩��?";
	hyoji(moji, moji2);
	printf("�A�����ꂽ��̕����� moji1:%s\n", moji);
}
void hyoji(char* p_moji1, char* p_moji2)
{
	for (; *p_moji1!= '\0'; p_moji1++);
	for (; *p_moji2 != '\0'; p_moji2++,p_moji1++) {
		*p_moji1 = *p_moji2;
	}
	*p_moji1 = '\0';
}