//Assign explicit values starting from 10 and print them
#include <stdio.h>

enum Level {
    LOW = 10,
    MEDIUM = 20,
    HIGH = 30,
    VERY_HIGH = 40
};

int main() {

    // Arrays to map enum names to values
    const char *levelNames[] = {
        "LOW",
        "MEDIUM",
        "HIGH",
        "VERY_HIGH"
    };

    int levelValues[] = {
        LOW,
        MEDIUM,
        HIGH,
        VERY_HIGH
    };

    int count = sizeof(levelValues) / sizeof(levelValues[0]);

    printf("Enum Name     Integer Value\n");
    printf("----------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-12s = %d\n", levelNames[i], levelValues[i]);
    }

    return 0;
}
