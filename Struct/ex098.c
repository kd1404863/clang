#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"�k�C��",NULL},{2,"�X��",NULL},{3,"��茧",NULL},{4,"�{�錧",NULL},{5,"�H�c��",NULL},{6,"�R�`��",NULL},{7,"������",NULL},{ END,"",NULL },{28,"���Ɍ�",NULL} };
	struct ken* p , * pw ;
	
	//�����N�̐ݒ�
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	//�|�C���^P��data�̐擪�A�h���X�i�k�C���j����
	p = data;
	//�k�C����next�A�h���X�𕺌Ɍ��̃A�h���X�ɕύX
	p->next = p + 8;
	//���Ɍ���next�A�h���X��X���̃A�h���X�ɕύX
	p += 8;
	p->next = p - 7;
	//�����N�̕\��
	for (p =data; p->code != END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}