/* Q119: Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration. */
#include <stdio.h>
int main() {
    int k;
    printf("Enter size of array: ");
    scanf("%d", &k);

    int a[k], visited[1000] = {0};

    printf("Enter elements: ");
    for(int j = 0; j < k; j++){
        scanf("%d", &a[j]);

        if(visited[a[j]] == 1){
            printf("Repeated element: %d\n", a[j]);
            return 0;
        }
        visited[a[j]] = 1;
    }
    printf("No repeated element found.\n");
    return 0;

}
