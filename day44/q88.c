//Replace spaces with hyphens in a string.
#include <stdio.h>

int main(){
    char str[100] = "My name is Isha, My birth date is :10/11/2003 and my email ID is Isha@gmail.com";
    for (int i=0; str[i]!='\0';i++){
        if(str[i]==' '){
        str[i]='-';
        }
    }
    printf("The modified string is %s",str);
    return 0;
}