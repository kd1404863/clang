#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kogeki;
	srand (time(0));	//—”‚Ì‰Šú‰»
	kogeki=rand()%100+1;   //—”ƒVƒƒƒbƒtƒ‹

	if (kogeki<=30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«‚¾!\n");
	}
	else {
		printf("’ÊíUŒ‚\n");
	}
}