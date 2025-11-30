//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
int Student_id;
char name[50];
float marks;
};

// Declaring a function
struct Student top_student(struct Student s[], int m) {
    int i, tIndex = 0;

    for (i = 1; i < m; i++) {
        if (s[i].marks > s[tIndex].marks) {
            tIndex = i;
        }
    }

    return s[tIndex];  // return entire structure
}

int main() {
    int m, i;
    printf("Enter number of students: ");
    scanf("%d", &m);

    struct Student s[n];

    // Input student details
    for (i = 0; i < m; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &s[i].Student_id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Getting top student
    struct Student topper = top_student(s, m);

    // Displaying result
    printf("\n--- Top Student Details ---\n");
    printf("Student ID    : %d\n", topper.Student_id);
    printf("Name  : %s\n", topper.name);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}

