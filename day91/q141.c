//q141. Define a structure Student with name, roll_no, and marks, then read and print one student's data
#include <stdio.h>
#include <stdio.h>
    struct Student{
        char name[50];
        int roll_no;
         int marks;
    };
int main(){
    struct Student s1;
    strcpy(s1.name,"Isha");
s1.roll_no=10;
s1.marks=100;
printf("Name:%s, roll_no:%d, marks:%d",s1.name,s1.roll_no,s1.marks);

}
