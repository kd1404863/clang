#include<stdio.h>
#include<string.h>
main()
{
	char box[] = "orange";
	int i;
	for (i = 0; box[i] != '\0'; i++) {
	}
	printf("文字列:%s\n", &box[0]);
	printf("文字数は%d文字\n", i);
	printf("文字数は%d文字\n", strlen(box));
}