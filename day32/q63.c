//Merge two arrays

#include <stdio.h>
int main(){
    int n1[6]={0,1,2,3,4,11};
    int n2[6]={5,6,7,8,9,10};
    int n3[12];
for(int i=0;i<6;i++){
    n3[i]=n1[i];
}
for(int i=0;i<6;i++){
    n3[i+6]=n2[i];
}
printf("the merged array is");
for(int i=0;i<12;i++){
    printf("%d",n3[i]);
}
return 0;
}