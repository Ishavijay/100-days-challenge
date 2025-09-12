/* Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main(){
int days,amt;
  printf("Enter number of late days:");
  scanf("%d",&days);
    if(days<=5){
    amt=days*2;}
    else if(days<=10){
    amt=(5*2)+((days-5)*4);}
    else if(days<=30){
    amt=(5*2)+(10*4)+((days-10)*6);}
    else{
        printf("The time has been more than 30 days. Therefore membership has expired");
    }
    printf("The amount to be given is %d",amt);
    return 0;}

