#include<stdio.h>
main()
{
	char day[][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	char s;
	printf("”’l‚Í?");
	scanf("%c", &s);
	switch (s) {
	case  '0':puts(day[0]);
		break;
	case  '1':puts(day[1]);
		break;
	case  '2':puts(day[2]);
		break;
	case  '3':puts(day[3]);
		break;
	case  '4':puts(day[4]);
		break;
	case  '5':puts(day[5]);
		break;
	case  '6':puts(day[6]);
		break;
	default:printf("0`6‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	}
}