#include <stdlib.h>
#include <string.h>
#include "contact.h"
#include "manager.h"

int main(void){
	Contact clist[100];
	int count = 0, index=0, menu;
	int no;

	count = loadContactData(clist);
	index = count;

	while (1){
		menu = selectMenu();
		if (menu == 0) break;

		if (menu == 1){
			if(count > 0)
				listContact(clist, index);
			else
				printf("메뉴가 없습니다.\n");
		}
		else if (menu == 2){
			count += createContact(&clist[index++]); 
		}
		else if (menu == 3){
			no =  selectDataNumber(clist, index);
			if(no>0)
				updateContact(&clist[no-1]);
			else {
				printf("==>최소됨!!");
				continue;
			}
		}
		else if (menu == 4){
			no = selectDataNumber(clist, index);
			if(no==0){
				printf("=> 취소됨!\n");
				continue;
			}else if(no>0){
				printf("정말로 삭제하시겠습니까?(삭제 :1) ");
				int delok;
				scanf("%d",&delok);
				if(delok==1){
					int del = deleteContact(&clist[no-1]);
					if( del == 1) printf("==> 삭제됨!\n");
					count--;
				}
			}
		}
		else if(menu == 5){
			saveContactData(clist, index);
		}
		else if(menu == 6){
			searchName(clist,index);
		}else if(menu == 7){
			searchNumber(clist,index);
	    }
    }
	printf("종료됨!\n");
	return 0;
}
