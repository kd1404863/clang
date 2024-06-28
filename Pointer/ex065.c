#include<stdio.h>
main()
{
	char* ptbl[4] = { "Programming2","Algorithm","Programming1","C" }, * pwork;
	int i, j;
	for (i = 0; i < 3; i++) {			//ƒ‰ƒXƒg1‰ñ‚Ìˆ—‚Ís‚í‚È‚¢
		for (j = i + 1; j < 4; j++) {
			if (strcmp(ptbl[i] ,ptbl[j])==1) {		//”äŠrŒ³‚Æ”äŠræB(Œ³)‚æ‚è(æ)‚Ì•û‚ª¬‚³‚¢‚Æ‚«1
				pwork = ptbl[i];			//“ü‚ê‘Ö‚¦ˆ—
				ptbl[i] = ptbl[j];
				ptbl[j] = pwork;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n", ptbl[i]);
	}
}