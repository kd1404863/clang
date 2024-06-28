#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int cpu, prayer;
	srand(time(0));
	cpu=rand() % 3 + 1;
	printf("何を出しますか?\n(1:グー 2:チョキ 3:パー)");
	scanf("%d", &prayer);
	if (cpu==1&&prayer==2)
	{
		printf("プレイヤーはチョキです。\nコンピューターはグーです。\n");
		printf("コンピューターの勝ち\n");
	}
	else {
		if (cpu == 1&&prayer == 3)
		{
			printf("プレイヤーはパーです。\nコンピューターはグーです。\n");
			printf("プレイヤーの勝ち\n");
		}
		else {
			if (cpu == 2&&prayer == 1)
			{
				printf("プレイヤーはグーです。\nコンピューターはチョキです。\n");
				printf("プレイヤーの勝ち\n");
			}
			else {
				if (cpu == 2 && prayer == 3)
				{
					printf("プレイヤーはパーです。\nコンピューターはチョキです。\n");
					printf("コンピューターの勝ち\n");
				}
				else {
					if (cpu == 3 && prayer == 1)
					{
						printf("プレイヤーはグーです。\nコンピューターはパーです。\n");
						printf("コンピューターの勝ち\n");
					}
					else {
						if (cpu == 3 && prayer == 2)
						{
							printf("プレイヤーはチョキです\nコンピューターはパーです。\n");
							printf("プレイヤーの勝ちです。\n");
						}
						else {
							if (cpu == 1 && prayer == 1)
							{
								printf("プレイヤーはグーです。\nコンピューターはグーです。\n");
								printf("あいこです。\n");
							}
							else {
								if (cpu == 2 && prayer == 2)
								{
									printf("プレイヤーはチョキです。\nコンピューターはチョキです。\n");
									printf("あいこです。\n");
								}
								else {
									if (cpu == 3 && prayer == 3)
									{
										printf("プレイヤーはパーです。\nコンピューターはパーです。\n");
										printf("あいこです。\n");
									}
								}
							}
						}
					}
				}
			}
		}
	}
}