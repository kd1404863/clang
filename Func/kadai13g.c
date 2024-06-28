#include<stdio.h>


main(int argc, char* argv[])
{
	char moji[] = { 'A', 'B', 'C', 'D', 'E' };
	int i;
	if (argc != 1) {

		if (*argv[1] == 'H') {
			for (i = 0; i < 5; i++) {
				printf("%c---%d\t", moji[i], moji[i]);
			}
		}
		if (*argv[1] == 'D') {
			for (i = 0; i < 5; i++) {
				printf("%c---0x%x\t", moji[i], moji[i]);
			}
		}
	}
	else {
		for (i = 0; i < 5; i++) {
			printf("%c---%d\t", moji[i], moji[i]);
		}
	}
}