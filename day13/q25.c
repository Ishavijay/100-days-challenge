#include <stdio.h>

int main(){
  int a,b,choice;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  printf("Enter your choice:\n
1:addition, 2:multiplication,3:subtraction,4:division");
  scanf("%d",&choice);
  switch(choice){
    case 1:printf("The addition is:%d %d",a+b);break;
    case 2:printf("The multiplication is:%d %d",a*b);break;
    case 3:printf("The subtraction is:%d %d",a-b);break;
    case 4:printf("The division is:%d %d",(float)a/b);break;
    default:printf("invalid input");
}
return 0;}
