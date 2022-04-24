typedef struct{
        char name[20];
        char des[20];
        int kg;
        int price;
        int num;
} Product;

int createProduct(Product *p);
void listProduct(Product *p,int count);
int readProduct(Product p);
int updateProduct(Product *p);
int deleteProduct(Product *p);
//void saveProduct(Product *p,int count);
//void loadProduct(Product *p,int count);
void sreachProduct(Product *p,int count);
