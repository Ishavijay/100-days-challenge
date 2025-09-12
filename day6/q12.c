 #include <stdio.h>
 int main(){
 int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("It is a positive number");
    }
    else if(n<0){
        printf("It is a negative number");
    }
    else{
        printf("THe number is zero");
    }
    getchar();
    return 0;
}