//q.146 Create Employee structure with nested Date structure for joining date and print details
#include <stdio.h>
#include <stdio.h>
struct date{
        int joining_Date;
        int joining_month;
        int joining_year;

    };
    struct employee{
        char name[50];
        int age;
        long long int mobile_number;
struct date dateofjoin;
    };
int main(){
    struct employee e1;
    strcpy(e1.name,"Isha");
e1.age=22;
e1.mobile_number=1234567890;
e1.dateofjoin.joining_Date=10;
e1.dateofjoin.joining_month=11;
e1.dateofjoin.joining_year=2025;
printf("Name:%s, age:%d, mobile number:%d, joining date: %d-%d-%d",e1.name,e1.age,e1.mobile_number,e1.dateofjoin.joining_Date,e1.dateofjoin.joining_month,e1.dateofjoin.joining_year);

}