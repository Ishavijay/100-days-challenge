/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>

int main(){
     int marks;
    printf("Enter marks obtained:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf ("Grade A");}
        else if(marks>=80 && marks<=89){ 
            printf("Grade B");}
            else if(marks<=79 && marks>=70) {
                printf("Grade C");}
                else if(marks<=69 && marks>=60) {
                    printf("Grade D");}
                    else if(marks<60){
                    printf("Grade F");}
                    else{
                        printf("invalid input");
                    }
    return 0;

}
