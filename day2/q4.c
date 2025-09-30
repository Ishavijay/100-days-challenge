//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main(){
    int r=11;
    float area=(3.14*r*r);
    float circumference=(2*3.14*r);
    printf("The area and circumference of the circle with r=11 is:\n");
    printf("Area = %f\n",area);
    printf("Circumference = %f\n",circumference);

    getchar();
    return 0;

}
