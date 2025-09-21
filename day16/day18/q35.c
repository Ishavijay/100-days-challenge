//Write a program to print all factors of a given number.
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
printf("The factors are:");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d \n",i);
        }

    }
    printf("\n");
    return 0;
}