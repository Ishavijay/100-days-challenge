#include <stdio.h>
int main(){
    int vcount=0;
    int concount=0;
    int spacecount=0;
    char str[40]="My name is Isha, I am pursuing btech cse";
   for(int i=0;i<40;i++){
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||
     str[i]=='u' || str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O'|| str[i]=='U'){
        vcount++;
     }
     else if(str[i] == ' '){
         spacecount++;
     }
     else if('a'<str[i]<'z'|| 'A'<str[i]<'Z' ){
        concount++;
     }
   }
    printf("The number of vowels are: %d",vcount);
    printf("the number of consonants are:%d",concount);
    printf("The number of spaces are :%d",spacecount);
    return 0;}