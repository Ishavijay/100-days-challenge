//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum outcome{RED, YELLOW, GREEN};
int main(){
    int choice;
    printf("Enter your preference \n");
    printf("1.RED ,2:YELLOW, 3:GREEN \n");
     scanf("%d",&choice);
    switch(choice){
        case RED:printf("STOP!!");break;
        case YELLOW:printf("WAIT");break;
        case GREEN:printf("GO");break;
default:printf("Invalid input");break;
    }
}