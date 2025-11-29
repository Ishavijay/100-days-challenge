//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    // ---- WRITE TO BINARY FILE ----
    fp = fopen("employee.dat", "wb");  // open in write-binary mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Take employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write struct to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data written to binary file successfully!\n");

    // ---- READ FROM BINARY FILE ----
    fp = fopen("employee.dat", "rb");  // open in read-binary mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display data read from file
    printf("\n--- Employee Data Read from File ---\n");
    printf("ID     : %d\n", empRead.id);
    printf("Name   : %s\n", empRead.name);
    printf("Salary : %.2f\n", empRead.salary);

    return 0;
}
