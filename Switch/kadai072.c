#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット?");
	scanf("%c", &moji);
	switch (moji) {
	case'a':case 'A':printf("America\nAustralia\n");
		break;
	case'e':case 'E':printf("England\n");
		break;
	case'f':case'F':printf("France\n");
		break;
	case'j':case'J':printf("Japan\n");
		break;
	default:printf("a e f jのみのアルファベット");
	}
}