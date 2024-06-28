#include<stdio.h>
main()
{
	int score = 0,max_score;
	char ch, name[20],max_name[20];
	FILE* fp;

	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("最高得点 名前:%s ハイスコア:%d\n", max_name, max_score);
	}
	else {
		printf("ファイルが読み取れません!\n");
		return;
	}

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
		if (score > max_score) {
			printf("★記録更新★\n");
		}
	}
	if (score > max_score) {
		if (fp = fopen("score.txt", "w")) {
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("ハイスコア更新!!\n");
		}
		else {
			printf("ファイルに書き込めません!\n");
			return;
		}
	}
	else {
		printf("次また頑張ろう!!\n");
	}
}