//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

// Function that accepts structure and prints its members
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student st;

    // Input student data
    printf("Enter Student ID: ");
    scanf("%d", &st.id);

    printf("Enter Student Name: ");
    scanf("%s", st.name);

    printf("Enter Student Marks: ");
    scanf("%f", &st.marks);

    // Call function with struct as argument
    printStudent(st);

    return 0;
}
