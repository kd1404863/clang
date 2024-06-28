#include<stdio.h>
#include<math.h>/*累乗する数学関数*/
int kake(int a, int b);

main()
{
	int kotae, a, b;
	printf("数値1?");
	scanf("%d", &a);
	printf("数値2?");
	scanf("%d", &b);
	kotae = kake(a, b);
	printf("%dの%d乗は%d\n", a, b, kotae);
}
int kake(int a, int b)
{
	int kotae;
	kotae=pow(a,b);/*累乗の計算*/
	return(kotae);
}