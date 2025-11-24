//Count characters in a string without using built-in length functions.

#include <stdio.h>
int main(){
    int count=0;
    char str[16]="My name is isha";
    for(int i=0;str[i]!='\0';i++){
        count++;

    }
   printf("%d",count);
return 0;    
}