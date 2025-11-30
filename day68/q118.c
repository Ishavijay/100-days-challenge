/* Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except 
for one. Print that missing number */

#include<stdio.h>
int main(){
    
    int k;
    printf("Enter size of array ");
    scanf("%d", &k);

    int arr[k];
    printf("Enter %d elements:\n", k, k);

    for(int j= 0; j < k; j++){
        scanf("%d", &arr[j]);
    }

    int expected_Sum = k * (k + 1) / 2;
    int actual_Sum = 0;
    
    for(int j = 0; j < k; j++){
        actual_Sum += arr[j];
    }

    int missing_Number = expected_Sum - actual_Sum;

    printf("Missing number: %d\n", missing_Number);

    return 0;

}
