#include<stdio.h>
main()
{
	int score = 0;
	char ch, name[100];
	FILE* fp;
	printf("名前を教えて?");
	scanf("%s", name);
	while (1)		//for(;;){}でも可
	{
		printf("現在のスコア:%d ('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}