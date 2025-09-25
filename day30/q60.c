//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main(){
    int n[30]={0,2,-3,-5,9,0,4,8,-1,-5,7,-22,0,4,7};
    int ncount=0,pcount=0,zcount=0;
    for(int i=0;i<15;i++){
        if(n[i]>0){
            pcount++;

        }
        else if(n[i]<0){
            ncount++;
        }
        else{
            zcount++;
        }

    }
    printf("The number of positive number are :%d",pcount);
    printf("The number of negative number are :%d",ncount);
    printf("The number of zeroes are :%d",zcount);
    return 0;
}