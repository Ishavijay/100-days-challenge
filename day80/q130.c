//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    FILE *fp;
    int i;

    // -------------------------------
    // WRITE TO FILE USING fprintf()
    // -------------------------------
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        // Write to file
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);
    printf("\nRecords written to file successfully!\n");

    // -------------------------------
    // READ FROM FILE USING fscanf()
    // -------------------------------
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records Read From File ---\n");

    while (fscanf(fp, "%s %d %f", s[0].name, &s[0].roll, &s[0].marks) != EOF) {
        printf("\nName  : %s\n", s[0].name);
        printf("Roll  : %d\n", s[0].roll);
        printf("Marks : %.2f\n", s[0].marks);
    }

    fclose(fp);

    return 0;
}
