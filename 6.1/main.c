#include <stdio.h>

struct product{
    int productId;
    char name;
    int quantity;
    float price;    

};
typedef struct product product;
product addproduct(product arr[100]){
    product a;
    printf("Enter product id: ");
    scanf("%d", &a.productId);
    printf("Enter product name: ");
    scanf("%c", &a.name);
    printf("Enter product quanity: ");
    scanf(" %d", &a.quantity);
    printf("Enter product price: ");
    scanf(" %f", &a.price);

}

int main(){

}