//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender { male=1, female, other};
struct Person {
char Person_name[50];
enum Gender G;
};

int main() {
    struct Person P;
    printf("Enter Person Name: ");
    scanf("%s", P.Person_name);

    printf("Select Gender (1-MALE, 2-FEMALE, 3-OTHER): ");
    scanf("%d", (int*)&P.G);

    printf("\n-------------------Person Details ----------------------\n");
    printf("Name   : %s\n", P.Person_name);
    printf("Gender : ");
    switch (P.G) {
        case MALE: printf("Male\n"); break;
        case FEMALE:printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
        default:  printf("Invalid input!!\n"); break;
    } return 0;
}

