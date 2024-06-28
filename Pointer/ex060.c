#include<stdio.h>
main()
{
	char data[9] = "Language";
	char* pdata = data, moji;
	int i=0;
	printf("data[]=%s\n", pdata);
	printf("検索文字は?");
	scanf("%c", &moji);
	printf("検索結果は");
	while (*(pdata + i)) {
		if (moji == *(pdata + i)) {
			printf(" %d ", i + 1);
		}
		i++;
	}
	printf("文字目です\n");
}