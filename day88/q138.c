//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW,
    WHITE
};

int main() {
    // Array of enum names (must match enum order)
    const char *colorNames[] = {
        "RED",
        "GREEN",
        "BLUE",
        "YELLOW",
        "WHITE"
    };

    // Corresponding enum values
    int colorValues[] = {
        RED,
        GREEN,
        BLUE,
        YELLOW,
        WHITE
    };

    int count = sizeof(colorValues) / sizeof(colorValues[0]);

    // Print using loop
    printf("Enum Name   Integer Value\n");
    printf("--------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-10s = %d\n", colorNames[i], colorValues[i]);
    }

    return 0;
}
