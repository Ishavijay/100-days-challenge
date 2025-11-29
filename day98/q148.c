//Take two structs as input and check if they are identical
#include <stdio.h>
#include <string.h>

// Define a struct
struct details {
    int id;
    char name[50];
    int age;
};
   
int main(){
    struct details d1, d2;
    //details of first person
printf("Enter details of first person \n");
printf("ID:");
scanf("%d",&d1.id);

printf("Name:");
scanf("%s",&d1.name);

printf("Age: ");
scanf("%d",&d1.age);

//details of first person
printf("Enter details of second person \n");
printf("ID:");
scanf("%d",&d2.id);

printf("Name:");
scanf("%s",&d2.name);

printf("Age: ");
scanf("%d",&d2.age);

//comparing both structures
if(d1.id == d2.id &&
d1.age == d2.age &&
strcmp(d1.name, d2.name) == 0){
    printf(" Both the struct are identical\n");
}
else{
    printf("The struct are not identical");
}
return 0;
}

