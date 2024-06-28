#include<stdio.h>
main()
{
	char m;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", m + 0x20);
		/*‘å•¶Žš‚©‚ç¬•¶Žš‚Ö*/
	}
	else{
		if (m >= 'a' && m <= 'z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", m - 0x20);
			/*¬•¶Žš‚©‚ç‘å•¶Žš‚Ö*/
		}
		else {
			printf("ƒGƒ‰[\n");
		}
    }
}