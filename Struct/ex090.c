#include<stdio.h>
struct syohin_data {		//�\���̃^�O��
	char name[20];			//�����o�[���X�g
	int tanka;
};
main()
{
	struct syohin_data syohin;		/*int a;�Ɠ����Ӗ�*/
	struct syohin_data* p;			/*int *p=&a;�Ɠ����Ӗ�*/
	p = &syohin;					/*p��syohin_data�^�̃|�C���^�Ȃ̂�"&"��t���ăA�h���X�擾����*/
	printf("���i��=");
	scanf("%s", p->name);			/*->�A���[���Z�q�@�|�C���^"->"�����o��*/
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->name=%d\n", p->tanka);
	printf("syohin.name=%s\n", syohin.name);/*.�h�b�g���Z�q�@�\���̕ϐ�"."�����o��*/
	printf("syohin.tanka=%d\n", syohin.tanka);
}