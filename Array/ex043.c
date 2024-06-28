#include<stdio.h>
#include<string.h>
main()
{
	char box[] = "orange";
	int i;
	for (i = 0; box[i] != '\0'; i++) {
	}
	printf("•¶š—ñ:%s\n", &box[0]);
	printf("•¶š”‚Í%d•¶š\n", i);
	printf("•¶š”‚Í%d•¶š\n", strlen(box));
}