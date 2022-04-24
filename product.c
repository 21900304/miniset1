#include <stdio.h>
#include <string.h>
#include "product.h"

int createProduct(Product *p){

        printf("제품명은 무엇입니까??");
        scanf("%s",p->name);

        printf("제품 설명");
        scanf("%s",p->des);

        printf("제품의 무게");
        scanf("%d",&p->kg);

        printf("제품의 가격");
        scanf("%d",&p->price);

        printf("배송 방병: 1->새벽 배송, 2->택배");
        scanf("%d",&p->num);

        printf("\n");
        return 1;
}
void listProduct(Product *p,int count){
        printf("-------------------------\n");
        printf("  제품 목록!!!!!\n");
        printf("  제품, 설명, 무게, 가격, 배송\n");
        printf("-------------------------\n");

        for(int i=0; i<count; i++)
        {
                printf("%d)",i+1);
                readProduct(p[i]);
        }
}
int readProduct(Product p){
        printf("%s %s %d %d %d\n",p.name,p.des,p.kg,p.price,p.num);
        printf("\n");
        return 1;
}
int updateProduct(Product *p){
        printf("제품명은 무엇입니까??");
        scanf("%s",p->name);

        printf("제품 설명");
        scanf("%s",p->des);

        printf("제품의 무게");
        scanf("%d",&p->kg);

        printf("제품의 가격");
        scanf("%d",&p->price);

        printf("배송 방병: 1->새벽 배송, 2->택배");
        scanf("%d",&p->num);

        printf("수정 성공\n");

        printf("\n");
        return 1;
}
int deleteProduct(Product *p){
        p->kg=-1;
        p->price=-1;
        p->num=-1;

        printf("삭제됨!!\n");

        printf("\n");
        return 1;
}
void saveProduct(Product *p, int count){
        FILE *fp;
        fp = fopen("product.txt","wt");
        for(int i=0; i<count; i++)
                if(p->price == -1)
                        continue;
                if(p->price >-1)
                        fprintf(fp,"%s %s %d %d %d\n",p->name,p->des,p->kg,p->price,p->num);

        fclose(fp);
        printf("저장됨!\n");
       /// printf("\n");
}
void loadProduct(Product *p,int count){
        FILE *fp;
        int i;
        fp= fopen("product.txt","r");
        for(int i=0; i<count; i++)
                fscanf(fp,"%s",p[i].name);
                fscanf(fp,"%s",p[i].des);
                fscanf(fp,"%d",&p[i].kg);
                fscanf(fp,"%d",&p[i].price);
                fscanf(fp,"%d",&p[i].num);
        fclose(fp);
        printf("로딩 됨\n");
        ///printf("\n");
}

void sreachProduct(Product *p,int count){
        char sreach[20];

        printf("검색할 제품은?");
        scanf("%s",sreach);

        printf("----------------------\n");

        int i=0;
        for(int i=0; i<count; i++)
                if(p->price ==-1)
                        continue;
                if(strstr(p->name,sreach))
                        printf("%d",i+1);
                        readProduct(p[i]);
}

