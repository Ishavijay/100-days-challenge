//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.\n");
        return 0;
    }

    avg = (float) sum / count;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
