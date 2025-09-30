//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
#include <math.h>

int main(){
    int l=4;
    int b=12;
int perimeter=2*(l+b);
int area=l*b;
    printf("the area and perimeter of rectamgle with l=4.0 units and b=12.0 units\n");
    printf("Perimeter = %d\n",perimeter);
    printf("Area = %d \n",area);
    return 0;

}
