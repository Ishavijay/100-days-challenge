//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum outcome{JAN, FEB, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPT, OCT, NOV, DEC};
int main(){
    int choice;
    printf("Enter the month of which you want to know the number of days\n");
    printf("1.JAN=1, 2.FEB, 3.MARCH, 4.APRIL, 5.MAY, 6.JUNE, 7.JULY, 8.AUGUST, 9.SEPT,10. OCT, 11. NOV, 12 DEC \n");
     scanf("%d",&choice);
    switch(choice){
        case JAN:printf("31 days");break;
        case FEB:printf("28 days normally but in leap years it has 29 days");break;
        case MARCH:printf("31 days");break;
        case APRIL:printf("30 days");break;
        case MAY:printf("31 days");break;
        case JUNE:printf("30 days");break;
        case JULY:printf("31 days");break;
        case AUGUST:printf("31 days");break;
        case SEPT:printf("30 days");break;
        case OCT:printf("31 days");break;
        case NOV:printf("30 days");break;
        case DEC:printf("31 days");break;
default:printf("Invalid input");break;
    }
}