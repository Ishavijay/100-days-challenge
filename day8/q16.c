#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    printf("enter third number:\n");
    scanf("%d",&c);

    if((a>b)&&(a>c)){
            printf("%d is largest among all three",a);
        }
        else if((b>a)&&(b>c)){
            
             printf("%d is largest among all three",b);
        }
else {
    printf("%d is largest among all three",c);
}

getchar();
getchar();
getchar();
return 0;
 }