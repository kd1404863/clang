#include<stdio.h>
#define END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken data[] = { {1,"�k�C��",NULL},{2,"�X��",NULL},{3,"��茧",NULL},{4,"�{�錧",NULL},{5,"�H�c��",NULL},{6,"�R�`��",NULL},{7,"������",NULL},{28,"���Ɍ�",NULL} ,{ END,"",NULL } };
	struct ken* p , * pw ;
	
	//�����N�̐ݒ�
	p = pw = data;
	do {
		p++;
		pw->next = p;
		pw = p;
	} while (p->code != END);
	//�X����next�����o�̒l���{�錧�̃A�h���X�ɕύX
	p = data;/*�|�C���^p��data�̐擪�A�h���X����*/
	/*p��p����X���̃A�h���X�����߂�*/
	p++;
	/*�X����p->next�ɋ{�錧�̃A�h���X(p���g��)����*/
	p->next = p+2;
	//�����N�̕\��
	for (p =data; p->code != END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}