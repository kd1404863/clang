#include<stdio.h>
main()
{
	int z, h, m, s;
	printf("�b�������:");
	scanf("%d", &z);
	h = z / 3600;
	m = (z % 3600) / 60;
	s = (z % 3600) % 60;
	if (z < 5000) {
		printf("%d����%d��%d�b�ł�", h, m, s);
	}
	else {
		printf("�G���[");
	}
}