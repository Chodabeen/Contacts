#include "contact.h"


int createContact(Contact *p){
	printf("�̸���? ");
	scanf("%s",p->name);
	printf("��ȣ��(- �Է����� ���ÿ�)? ");
	scanf("%s",p->number);
    //printf("%s : %s\n", p->name, p->number);
	p->del = 0;
	return 1;
}

void readContact(Contact p){
    printf("%s : %s\n", p.name, p.number);
}

int updateContact(Contact *p){
	printf("�̸���? ");
	scanf("%s",p->name);
	printf("��ȣ��? ");
	scanf("%s",p->number);
	printf("=> ������!\n");
	return 1;
}

int deleteContact(Contact *p){
	p->number[0] = '\0';
	return 1;
}

int selectMenu(){
    int menu;
	printf("\n*** �������� ***\n");
	printf("1. ����ó ��ȸ\n");
	printf("2. ����ó �߰�\n");
	printf("3. ����ó ����\n");
	printf("4. ����ó ����\n");
	printf("5. ��������\n");
	printf("6. ����ó �̸� �˻�\n");
	printf("7. ����ó ��ȣ �˻�\n");
	printf("0. ����\n\n");
	printf("=> ���ϴ� �޴���? ");
	scanf("%d", &menu);
	return menu;
}

void searchName(Contact *p, int count){
	int scnt = 0;
	char search[20];

	printf("�˻��� �̸�? ");
	scanf("%s", search);
	printf("****************************\n");
	for(int i =0; i <count ; i++){
		if(p[i].del == -1) continue;
		if(strstr(p[i].name, search)){
			printf("%2d ", i+1);
			readContact(p[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> �˻��� ������ ����!");
	printf("\n");
}

void searchNumber(Contact*p, int count){
    int scnt = 0;
	char search[12];
	printf("�˻��� ��ȣ? ");
	scanf("%s", search);
	printf("****************************\n");
	for(int i =0; i <count ; i++){
		if(p[i].del == -1) continue;
		if(strstr(p[i].number, search)){
			printf("%2d ", i+1);
			readContact(p[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> �˻��� ������ ����!");
	printf("\n");
}