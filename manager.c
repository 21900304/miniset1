#include <stdio.h>
#include "manager.h"

int selectMenu(){
        int menu;
        printf("\n *** 제품 등록 서비스\n");
        printf("0. 종료\n");
        printf("1. 제품 추가\n");
        printf("2. 제품 확인\n");
        printf("3. 제품 수정\n");
        printf("4. 제품 삭제\n");
        printf("5. 제품 저장\n");
        printf("6. 제품 로딩\n");
        printf("7. 제품 검색\n");
        printf("=> 원하는 메뉴는?\n");
        scanf("%d",&menu);

        return menu;
}
