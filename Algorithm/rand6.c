#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int cpu, prayer;
	srand(time(0));
	cpu=rand() % 3 + 1;
	printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[)");
	scanf("%d", &prayer);
	if (cpu==1&&prayer==2)
	{
		printf("�v���C���[�̓`���L�ł��B\n�R���s���[�^�[�̓O�[�ł��B\n");
		printf("�R���s���[�^�[�̏���\n");
	}
	else {
		if (cpu == 1&&prayer == 3)
		{
			printf("�v���C���[�̓p�[�ł��B\n�R���s���[�^�[�̓O�[�ł��B\n");
			printf("�v���C���[�̏���\n");
		}
		else {
			if (cpu == 2&&prayer == 1)
			{
				printf("�v���C���[�̓O�[�ł��B\n�R���s���[�^�[�̓`���L�ł��B\n");
				printf("�v���C���[�̏���\n");
			}
			else {
				if (cpu == 2 && prayer == 3)
				{
					printf("�v���C���[�̓p�[�ł��B\n�R���s���[�^�[�̓`���L�ł��B\n");
					printf("�R���s���[�^�[�̏���\n");
				}
				else {
					if (cpu == 3 && prayer == 1)
					{
						printf("�v���C���[�̓O�[�ł��B\n�R���s���[�^�[�̓p�[�ł��B\n");
						printf("�R���s���[�^�[�̏���\n");
					}
					else {
						if (cpu == 3 && prayer == 2)
						{
							printf("�v���C���[�̓`���L�ł�\n�R���s���[�^�[�̓p�[�ł��B\n");
							printf("�v���C���[�̏����ł��B\n");
						}
						else {
							if (cpu == 1 && prayer == 1)
							{
								printf("�v���C���[�̓O�[�ł��B\n�R���s���[�^�[�̓O�[�ł��B\n");
								printf("�������ł��B\n");
							}
							else {
								if (cpu == 2 && prayer == 2)
								{
									printf("�v���C���[�̓`���L�ł��B\n�R���s���[�^�[�̓`���L�ł��B\n");
									printf("�������ł��B\n");
								}
								else {
									if (cpu == 3 && prayer == 3)
									{
										printf("�v���C���[�̓p�[�ł��B\n�R���s���[�^�[�̓p�[�ł��B\n");
										printf("�������ł��B\n");
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