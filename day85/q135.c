//Assign explicit values starting from 10 and print them
#include <stdio.h>
enum levels {LOW = 10,MEDIUM = 20,HIGH = 30,VERY_HIGH = 40};
int main() {
const char *levelsNames[] = {"LOW","MEDIUM", "HIGH","VERY_HIGH"};
    int levelsValue[] = {LOW,MEDIUM,HIGH,VERY_HIGH};
    int n= sizeof(levelsValue) / sizeof(levelsValue[0]);

    printf("Level Name           Their value\n");
    printf("----------------------------\n");

    for (int j= 0; i < n; j++) {
        printf("%-12s = %d\n", levelNames[i], levelValues[i]);
    }return 0;
}

