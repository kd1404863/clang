#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"�k�C��",NULL},{2,"�X��",NULL},{3,"��茧",NULL},{4,"�{�錧",NULL},{5,"�H�c��",NULL},{6,"�R�`��",NULL},{7,"������",NULL},{END,"",NULL} };
	struct ken* p , * pw ;
	
	//�����N�̐ݒ�
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	p = data;		//�|�C���^P��z��̐擪�A�h���X�i�k�C���j��
	p->next = p+6;	//�k�C����next�����o��6��̕����̃A�h���X��
	pw = data;
	pw += 3;
	//�����N�̕\��
	for (p = pw; p->code != END; p = p->next) {
		printf("%d ", p);
		printf("code=%d name=%s", p->code, p->name);
		printf("%d\n", p->next);
	}

}