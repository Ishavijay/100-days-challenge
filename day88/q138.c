//Print all enum names and integer values using a loop.
#include <stdio.h>

enum days{mon = 1,tues,wed,thurs,fri,sat,sun};
int main() {
    const char *daysname[] = {"mon","tues","wed","thurs","fri","sat","sun"};

    int  daysvalue[] = {mon,tues,wed,thurs,fri,sat,sun};

    int n = sizeof(daysvalue) / sizeof(daysvalue[0]);
    printf("Day name                   value\n");
    printf("--------------------------\n");

    for (int j = 0; j < n; j++) {
        printf("%-10s = %d\n", daysname[j], daysvalue[j]);
    }return 0;
}

