//Show that enums store integers by printing assigned values
#include <stdio.h>

enum Days { MON = 1,TUE,WED = 5,THU,FRI,SAT = 10,SUN};

int main() {
printf("MON = %d\n", MON);
printf("TUE = %d\n", TUE);
printf("WED = %d\n", WED);
printf("THU = %d\n", THU);
printf("FRI = %d\n", FRI);
printf("SAT = %d\n", SAT);
printf("SUN = %d\n", SUN);

    return 0;
}
