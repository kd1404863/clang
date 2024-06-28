#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[10];
	int i, s, t, work;
	for (i = 0; i < 20; i++)
	{
		d[i] = 1 + i;
	}
	for (i = 0; i < 20; i++)
	{
		
	}

	srand(time(0));
	for (i = 0; i < 20; i++)
	{
		t = rand() % 20;

		work = d[i];
		d[i] = d[t];
		d[t] = work;

	}
	printf("’T¸’l‚ð“ü—Íi20ˆÈ‰ºj");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("’T¸’l%d‚ð,d[%d]‚Å”­Œ©!\n", s, i);
	}
}