#include<stdio.h>
#include<math.h>/*�ݏ悷�鐔�w�֐�*/
int kake(int a, int b);

main()
{
	int kotae, a, b;
	printf("���l1?");
	scanf("%d", &a);
	printf("���l2?");
	scanf("%d", &b);
	kotae = kake(a, b);
	printf("%d��%d���%d\n", a, b, kotae);
}
int kake(int a, int b)
{
	int kotae;
	kotae=pow(a,b);/*�ݏ�̌v�Z*/
	return(kotae);
}