#include<stdio.h>
main()
{
	int z, h, m, s;
	printf("秒数を入力:");
	scanf("%d", &z);
	h = z / 3600;
	m = (z % 3600) / 60;
	s = (z % 3600) % 60;
	if (z < 5000) {
		printf("%d時間%d分%d秒です", h, m, s);
	}
	else {
		printf("エラー");
	}
}