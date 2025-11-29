//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;  // pointer to struct

    ptr = &s;  // assign address of struct to pointer

    // Input data using pointer
    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter Student Marks: ");
    scanf("%f", &ptr->marks);

    // Modify data using pointer
    ptr->marks += 5;  // add 5 marks as bonus

    // Display data using pointer
    printf("\n--- Student Details ---\n");
    printf("ID    : %d\n", ptr->id);
    printf("Name  : %s\n", ptr->name);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
