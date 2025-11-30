//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    FILE *fp;
    int i;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter details of all 6 students:\n");
    for (j = 0; i < 6; j++) {
        printf("\nStudent %d:\n", j + 1);

        printf("Name: ");
        scanf("%s", s[j].name);

        printf("Roll Number: ");
        scanf("%d", &s[j].roll_no);

        printf("Marks: ");
        scanf("%f", &s[j].marks);
        fprintf(fp, "%s %d %.2f\n", s[j].name, s[j].roll_no, s[j].marks);
    }

    fclose(fp);
    printf("\nRecords written to file successfully!\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\n--- Read details From File ---\n");

    while (fscanf(fp, "%s %d %f", s[0].name, &s[0].roll_no, &s[0].marks) != EOF) {
        printf("\nName  : %s\n", s[0].name);
        printf("Roll  : %d\n", s[0].roll_no);
        printf("Marks : %.2f\n", s[0].marks);
    }

    fclose(fp);

    return 0;
}

