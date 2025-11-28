//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum choices{ADD=1,SUBTRACT,MULTIPLY};
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    int choice;
    printf("Enter your preference \n");
    printf("1:Add 2:Subtract 3:Multiply \n");
scanf("%d",&choice);
    switch(choice){
        case ADD:printf("Addition is %d",a+b);break;
        case SUBTRACT:printf("Subtraction is %d",a-b);break;
        case MULTIPLY:printf("Multiplication is %d",a*b);break;
        default: printf("Invalid choice");break;
    }
}