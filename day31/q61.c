//Search for an element in an array using linear search.

#include <stdio.h>

int main(){
    int a;
    int found=0;
int arr[5]={11,21,31,41,51};
    int key=21;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            found=1;
            a=i;
            break;
        }
    }
    if(found==1){
    printf("The required elements '21' is on the index %d",a);
    }
    else{
        printf("The required element does not exist");
    }
    return 0; 
}