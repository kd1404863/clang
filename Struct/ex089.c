#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
}student;

main()
{
	printf("名前を入力:");
	scanf("%s",&student.name );
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &student.birth[0],&student.birth[1],&student.birth[2]);
	printf("血液型を入力:");
	scanf(" %s", &student.blood);
	printf("%s--%d年%d月%d日生　血液型-%s型\n", student.name, student.birth[0],student.birth[1],student.birth[2], student.blood);
}