#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("���l��3����");
		ret = scanf("%d%d%d", &a, &b, &c);
		printf("ret:%d\ta:%d\tb:%d\tc:%d\n", ret, a, b, c);
		 
	printf("���l�������");
	while(scanf("%d",&a)!=EOF){
		printf("���l=%d\n", a);
		printf("���l�������(ctrl+Z�ŏI��):");
	}
}