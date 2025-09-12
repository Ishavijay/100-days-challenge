#include <stdio.h>
#include <math.h>

int main(){
    int t;
    float p,r;
    printf("Enter principal amount:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%d",&t);
    float SI=(p*r*t)/100;
    float CI= p*(pow(1+r/100,t));
    printf("SI:%f \n",SI);
    printf("CI:%d",CI);

    getchar();
    return 0;
}