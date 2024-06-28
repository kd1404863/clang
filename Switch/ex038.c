#include<stdio.h>
main()
{
	int moji;
	printf("整数を入力:");
	scanf("%d", &moji);

	if (10 <= moji && moji <= 49) {

		switch (moji / 10) {
		case 1:printf("10点台です\n");
			break;
		case 2:printf("20点台です\n");
			break;
		case 3:printf("30点台です\n");
			break;
		case 4:printf("40点台です\n");
			break;
		}

	}
	else {
		printf("エラー:10～49の範囲を入力してください\n");
	}
}