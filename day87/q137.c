//Create an enum for user roles (ADMIN=1,USER, GUEST) and display messages based on role.
#include <stdio.h>
enum roles {Admin=1, User, Guest};
int main(){
int choice;
    printf("Enter role : 1: Admin , 2: user 3: Guest");
    scanf("%d",&choice);
    switch(choice){
        case Admin: printf ("The person is admin and He maintains the request coming at the server");break;
         case User: printf ("The person is user and is the owner of the account");break;
          case Guest: printf ("The person is guest and he comes sometimes and does not have any account");break;
default: printf("Invalid input");break;
    }
}