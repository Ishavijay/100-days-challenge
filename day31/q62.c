//Reverse an array without taking extra space.

#include <stdio.h>
int main(){
    int arr[10]={2,3,4,5,1,6,7,8,9,0};
for (int i = 0; i < 5; i++) {
        int temp = arr[i];
        arr[i] = arr[10 - i - 1];
        arr[10- i - 1] = temp;
    }
for(int i=0;i<10;i++){
printf("%d" ,arr[i]);}
return 0;
}