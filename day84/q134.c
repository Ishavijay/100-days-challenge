//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum outcome{SUCCESS,FAILURE,TIMEOUT};
int main(){
    int choice;
    printf("Enter your preference");
    printf("1.Success ,2:Failure, 3:Timeout");
     scanf("%d",&choice);
    switch(choice){
        case SUCCESS:printf("You were able to win the game, It was a success");break;
        case FAILURE:printf("You were able not to win the game, It was a failure");break;
        case TIMEOUT:printf("You went out of time and you were not able to finish the games");break;
default:printf("Invalid input");break;
    }
}