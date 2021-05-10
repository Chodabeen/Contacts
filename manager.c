#include "manager.h"

void listContact(Contact *p, int count){
	printf("\nNo Name : Number\n");
	printf("=================================================\n");
	for(int i =0; i <count ; i++){
		if(p[i].del == -1) continue;
		printf("%2d ", i+1);
		readContact(p[i]);
	}
	printf("\n");
}

int selectDataNumber(Contact *p, int count){
    int idx;
	listContact(p, count);
	printf("번호는?(취소: 0)");
	scanf("%d",&idx);
	return idx;
}

void saveContactData(Contact *p, int count){
	FILE *fp;
	fp = fopen("contact.txt", "wt");
	for(int i = 0; i < count; i++){
		if(p[i].del == -1) continue;
		fprintf(fp, "%s %s\n", p[i].name, p[i].number);
	}
	fclose(fp);
	printf("=> 저장됨! \n");

}

int loadContactData(Contact *p){
	int i=0;
	FILE *fp;
	fp = fopen("contact.txt","rt");
	if(fp == NULL) {
		    printf("=> 파일 없음\n");
		    return 0;
	}
	for(; i < 100; i++){
		fscanf(fp, "%s", p[i].name);
		if(feof(fp)) break;
		fscanf(fp, "%s", p[i].number);
	}
	fclose(fp);
	printf("=> 로딩 성공!\n");
	return i;

}