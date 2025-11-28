//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>
enum outcome{SUN,MON,TUES,WED,THURS,FRI,SAT};
int main(){
    int choice;
    printf("Enter your preference");
    printf("1. SUN,2. MON,3. TUES,4. WED,5. THURS,6. FRI,7. SAT");
     scanf("%d",&choice);
    switch(choice){
        case SUN:printf("sunday:1");break;
        case MON:printf("monday:2");break;
        case TUES:printf("tuesday:3");break;
        case WED:printf("wednesday:4");break;
        case THURS:printf("thursday:5");break;
        case FRI:printf("friday:6");break;
        case SAT:printf("saturday:7");break;
default:printf("Invalid input");break;
    }
}