//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

// Define structure with enum member
struct Person {
    int id;
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter Person ID: ");
    scanf("%d", &p.id);

    printf("Enter Person Name: ");
    scanf("%s", p.name);

    printf("Select Gender (1-MALE, 2-FEMALE, 3-OTHER): ");
    scanf("%d", (int*)&p.gender);

    // Print person details
    printf("\n--- Person Details ---\n");
    printf("ID     : %d\n", p.id);
    printf("Name   : %s\n", p.name);

    printf("Gender : ");
    switch (p.gender) {
        case MALE:   printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER:  printf("OTHER\n"); break;
        default:     printf("INVALID\n"); break;
    }

    return 0;
}
