#include<stdio.h>
main()
{
	int moji;
	printf("���������:");
	scanf("%d", &moji);

	if (10 <= moji && moji <= 49) {

		switch (moji / 10) {
		case 1:printf("10�_��ł�\n");
			break;
		case 2:printf("20�_��ł�\n");
			break;
		case 3:printf("30�_��ł�\n");
			break;
		case 4:printf("40�_��ł�\n");
			break;
		}

	}
	else {
		printf("�G���[:10�`49�͈̔͂���͂��Ă�������\n");
	}
}