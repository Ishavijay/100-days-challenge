//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n, i, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student data
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Print top student
    printf("\n--- Student with Highest Marks ---\n");
    printf("ID    : %d\n", s[topIndex].id);
    printf("Name  : %s\n", s[topIndex].name);
    printf("Marks : %.2f\n", s[topIndex].marks);

    return 0;
}
