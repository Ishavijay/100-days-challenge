//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e, Emp;
    FILE *FP;

  
    FP = fopen("employee.dat", "wb");  
    if (FP == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Take employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    // Write struct to file
    fwrite(&e, sizeof(struct Employee), 1, FP);
    fclose(FP);

    printf("\nEmployee data written to binary file successfully!\n");

    // ---- READ FROM BINARY FILE ----
    FP= fopen("employee.dat", "rb");  // open in read-binary mode
    if (FP == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
fread(&Emp, sizeof(struct Employee), 1, FP);
    fclose(FP);
    
    printf("\n--- Reading employee Data from the file---\n");
    printf("employee ID : %d\n", Emp.emp_id);
    printf("Name   : %s\n", Emp.name);
    printf("Salary : %.2f\n", Emp.salary);

    return 0;
}

