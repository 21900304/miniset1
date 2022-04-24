#include <stdio.h>
#include "product.h"
#include "manager.h"
int main(){
#ifdef DEBUG
        printf("==> debugmode\n");
#endif
        Product d[20];
        int menu;
        int index=0;
        int count=0;
        while(1)
        {
                menu = selectMenu();

                if(menu == 0) break;
                if(menu == 1)
                {
                        count += createProduct(&d[index++]);
                }
                else if(menu == 2) listProduct(d,index);
                else if(menu == 3) updateProduct(d);
                else if(menu == 4) deleteProduct(d);
                else if(menu == 5) saveProduct(d,index);
                else if(menu == 6) loadProduct(d,index);
                else if(menu == 7) sreachProduct(d,index);
        }
        printf("종료됨");



        return 0;
}
