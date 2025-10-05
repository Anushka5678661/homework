
#include <stdio.h>
int main() {
    char name[50], manufacturer[50], category[50];
    int id, quantity;
    float price;
    printf("Enter Product Name: ");
    scanf("%s", name);
    printf("Enter Product ID: ");
    scanf("%d", &id);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Manufacturer: ");
    scanf("%s", manufacturer);
    printf("Enter Category: ");
    scanf("%s", category);
    printf("The PSroduct details are:-\n");
    printf("Product Name: %s\n", name);
    printf("Product ID: %d\n", id);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category: %s\n", category);
    return 0;
}