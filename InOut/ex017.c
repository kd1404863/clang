#include<stdio.h>
main()
{
	float moji1,moji2,moji3,goukei, heikin;
	printf("１つ目の実数:");
	scanf("%f", &moji1);
	printf("２つ目の実数:");
	scanf("%f", &moji2);
	printf("３つ目の実数:");
	scanf("%f", &moji3);
	goukei = moji1 + moji2 + moji3;
	heikin = (float)goukei / 3;
	printf("合計＝%.2f\t平均=%.2f\n", goukei, heikin);
}