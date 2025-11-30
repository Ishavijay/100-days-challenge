//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Details {
    char name[50];
    float price;
};

void printproductdetails(struct Details d) {
    printf("\n---Details of the product ---\n");
    printf("Name of the product : %s\n", d.name);
    printf("Price of the product : %.2f\n", d.price);
}

int main() {
    struct Details p1;
 printf("Enter Product name: ");
    scanf("%s", p1.name);
    
    printf("Enter price of the product: ");
    scanf("%f", &p1.price);
    printproductdetails(p1);

    return 0;
}



