//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c){
        printf("It is an equilateral triangle");
    }
    else if (a==b!=c || a==c!=b || b==c!=a ){
        printf("It is a Isosceles triangle");
    }
    else {
       printf("It is a scalene triangle");
    }
    return 0;
}