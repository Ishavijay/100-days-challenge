//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
struct employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    // Dynamically allocate memory for one employee struct
    struct employee *e = (struct employee *) malloc(sizeof(struct employee));
if (e == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter employee ID: ");
    scanf("%d", &e->emp_id);

    printf("Enter employee Name: ");
    scanf("%s", &e->name);

    printf("Enter employee Age: ");
    scanf("%f", &e->salary);
    printf("\n--- Employee details ---\n");
    printf("Employee ID  : %d\n", s->emp_id);
    printf("Name : %s\n", e->name);
    printf("Salary  : %f\n", e->salary);

    // Free memory
    free(e);
    return 0;
}

