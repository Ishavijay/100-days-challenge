//Count even and odd numbers in an array.
#include <stdio.h>

int main(){
    int num[20]={1,2,3,4,5,6,7,8};
 int ecount=0,ocount=0;
    for(int i=0;i<8;i++){
        if(num[i]%2==0){
            ecount++;
        }
        else 
        {
            
        ocount++;
        }

    }
    printf("The number of even numbers is: %d \n",ecount);
    printf("The number of odd numbers is:%d",ocount);
    return 0;
}