//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to find the top student
struct Student findTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // return entire structure
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Get top student
    struct Student top = findTopStudent(s, n);

    // Display result
    printf("\n--- Top Student Details ---\n");
    printf("ID    : %d\n", top.id);
    printf("Name  : %s\n", top.name);
    printf("Marks : %.2f\n", top.marks);

    return 0;
}
