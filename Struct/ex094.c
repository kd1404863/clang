#include<stdio.h>
#include<string.h>
#define END 2
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};


main()
{
	struct profile data[END];
	struct profile* p=data;
	int i;
	for (i = 0; i < END; i++,p++) {
		printf("%d�l�ځi���O�j:",i+1);
		scanf("%s", p->name);//�����^�z��̂���'&'���ȗ�
		printf("���N����:");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^:");
		scanf(" %s",p->blood);
	}
	p = data;
	for (i = 0; i < END; i++,p++) {
		if (strcmp(p->blood,"A"),strcmp(p->blood,"a") == 0) {
			printf("%s---%d�N%d��%d�����܂� ���t�^-%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}