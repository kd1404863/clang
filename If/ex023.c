#include<stdio.h>
main()
{
	int z, h, m, s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &z);
	h = z / 3600;
	m = (z % 3600) / 60;
	s = (z % 3600) % 60;
	if (z < 5000) {
		printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, s);
	}
	else {
		printf("ƒGƒ‰[");
	}
}