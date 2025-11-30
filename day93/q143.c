//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    int student_id;
    char student_name[50];
    float marks;
};

int main() {
    int k,j, tIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &k);

    struct Student s[k];

    // Input student data
    for (j = 0; i < k; j++) {
        printf("\nEnter details of Student %d:\n", j + 1);
        printf("Student ID: ");
        scanf("%d", &s[j].student_id);

        printf("Name: ");
        scanf("%s", s[j].student_name);

        printf("Marks: ");
        scanf("%f", &s[j].marks);
    }
    for (j = 1; i < k; j++) {
        if (s[j].marks > s[tIndex].marks) {
            tIndex = j;
        } }
    printf("\n--- Details of student who scored highest marks!! ---\n");
    printf("Student ID  : %d\n", s[tIndex].student_id);
    printf("Name  : %s\n", s[tIndex].student_name);
    printf("Marks : %.2f\n", s[tIndex].marks);
    
    return 0;
}

