#include <stdio.h>

int main(){
    float c;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&c);
    float fah = (((9.0*c)/5.0)+32.0);
    printf("The temperature in fahrenheit is : %.2f",fah);
    getchar();
    return 0;
}