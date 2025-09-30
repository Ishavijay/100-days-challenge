//Write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>

int main() {
    int cp, sp;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (sp > cp) {
        printf("It is a profit\n");
        int profit = sp - cp;
        float pp = ((float)profit / cp) * 100;
        printf("The profit percentage is: %.2f%%\n", pp);
    } 
    else {
        printf("It is a loss\n");
        int loss = cp - sp;
        float lp = ((float)loss / cp) * 100;
        printf("The loss percentage is: %.2f%%\n", lp);
    }

    return 0;
}

