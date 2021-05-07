#include "contact.h"


int createContact(Contact *p){
	printf("이름은? ");
	scanf("%s",p->name);
	printf("번호는? (- 입력하지 마시오)");
	scanf("%d",&p->number);
	return 1;
}

void readContact(Contact p){
    printf("%s : %d\n", p.name, p.number);
}

int updateContact(Contact *p){
	printf("이름은? ");
	scanf("%s",p->name);
	printf("번호는? ");
	scanf("%d",&p->number);
	printf("=> 수정됨!\n");
	return 1;
}

int deleteContact(Contact *p){
	p->number = -1;
	return 1;
}

int selectMenu(){
    int menu;
	printf("\n*** 점수계산기 ***\n");
	printf("1. 연락처 조회\n");
	printf("2. 연락처 추가\n");
	printf("3. 연락처 수정\n");
	printf("4. 연락처 삭제\n");
	printf("5. 파일저장\n");
	printf("6. 연락처 이름 검색\n");
	printf("7. 연락처 번호 검색\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
	return menu;
}

void searchName(Contact *p, int count){
	int scnt = 0;
	char search[20];

	printf("검색할 이름? ");
	scanf("%s", search);
	printf("****************************\n");
	for(int i =0; i <count ; i++){
		if(p[i].number == -1) continue;
		if(strstr(p[i].name, search)){
			printf("%2d ", i+1);
			readContact(p[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> 검색된 데이터 없음!");
	printf("\n");
}

void searchNumber(Contact*p, int count){
    int scnt = 0;
	int search;
	printf("검색할 번호? ");
	scanf("%d", &search);
	printf("****************************\n");
	for(int i =0; i <count ; i++){
		if(p[i].number == -1) continue;
		if(p[i].number == search){
			printf("%2d ", i+1);
			readContact(p[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> 검색된 데이터 없음!");
	printf("\n");
}