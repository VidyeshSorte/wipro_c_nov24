#include <stdio.h>

int main() {
    float fArray[] = {2.2f, 14.2f, 1.5f, 9.1f, 6.75f};

    printf("Address of fArray: %u \n \n", fArray);
    printf("%u %u %u %u \n", fArray, fArray + 1, fArray - 1, fArray + 2);
    printf("%.2f %.2f %.2f \n", *fArray, *fArray + 1, *fArray + *fArray);
    printf("%u %u %u %u \n", &fArray, &fArray + 1, &fArray - 1, &fArray +2);

}
    