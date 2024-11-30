#include<stdio.h>
// bitwise operators

int main() {
    int num1 = 23, num2 = 12, result = 0;
    
    result = num1 & num2;
    printf("X & Y = %d \n", result);
    result = num1 | num2;
    printf("X | Y = %d \n", result);
    result = num1 ^ num2;
    printf("X ^ Y = %d \n", result);
    result = num1 >> num2;
    printf("X >> 3 = %d \n", result);
    result = num1 << num2;
    printf("X << 2 = %d \n", result);
}
