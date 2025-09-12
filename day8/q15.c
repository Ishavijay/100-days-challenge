//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main(){
  char alp;
  printf("Enter a single character:");
  scanf("%c",&alp);

  if(alp>='a' && alp<='z'){
      printf("It is a Lowercase alphabet!!");

  }
  else if(alp>='A' && alp<='Z'){
      printf("It is a uppercase alphabet!!");

}
else if(alp>='0' && alp<='9'){
    printf("It is a digit");
}
else{
    printf("It is a special charachter");
}
return 0;}