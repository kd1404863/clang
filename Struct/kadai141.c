#include<stdio.h>
struct data {
	char kurasu[100];
	char kyouka[100];
	int tanni;
};
main()
{
	struct data seito1;
	strcpy(seito1.kurasu , "ゲームソフトIコース");
	strcpy(seito1.kyouka , "C言語");
	seito1.tanni = 8;

	printf("コース名:%s\n",seito1.kurasu);
	printf("教科名:%s\n",seito1.kyouka);
	printf("単位数:%d\n", seito1.tanni);
}