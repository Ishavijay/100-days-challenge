//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    int num, cnt = 0;
    int sum = 0;
    float average;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        cnt++;
    }
    fclose(fp);
    if (cnt == 0) {
        printf("No numbers found in file.\n");
        return 0;
    }
    average = (float) sum / cnt;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

