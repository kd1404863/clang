//�r�b�g�����i��ԊǗ��j
#include<stdio.h>
enum BitState		//�񋓌^�錾 
{
	Base = 0,		//00000000 �ʏ�U��
	Poison=1<<0,	//00000001 �ŏ��
	Sleep=1<<1,		//00000010 ������
	Paralysis=1<<2,	//00000100 �}�q���
	Burn=1<<3,		//00001000 �₯�Ǐ��
	AtkUp=1<<4,		//00010000 �U���̓A�b�v���
	AtkDown=1<<5	//00100000 �U���̓_�E�����
};

typedef unsigned int UINT;//unsigned int...�S�r�b�g��2�i���̊e���ɑΉ������Ċi�[�B�����^

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT * s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)	// ���݂̏�Ԃ�\��
{
	printf("----���݂̏��----\n");
	if (s & Poison)			// ���ʂ��^�Ȃ�Ώ���
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("�}�q\n");
	}
	if (s & Burn)
	{
		printf("�₯��\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("�ʏ���\n");
	}
	printf("-------------\n");
}

void ChangeFlag(UINT* s)	// ��Ԃ�t�^����
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂���?\n");
		printf("1:�ŁA2:����A3:�}�q�A4:�₯�ǁA5:�U���̓A�b�v�A6:�U���̓_�E���A0:�I��\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) {

			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�ŁA2:����A3:�}�q�A4:�₯�ǁA5:�U���̓A�b�v�A6:�U���̓_�E���A7:�S��,0:�I��\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) {

		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s =Base;
			break;
		}
	}
}