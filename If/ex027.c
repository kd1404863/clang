#include<stdio.h>
main()
{
	char m;
	printf("文字を入力:");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("変換すると%c\n", m + 0x20);
		/*大文字から小文字へ*/
	}
	else{
		if (m >= 'a' && m <= 'z') {
			printf("変換すると%c\n", m - 0x20);
			/*小文字から大文字へ*/
		}
		else {
			printf("エラー\n");
		}
    }
}