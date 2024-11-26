#include <stdio.h>
//Find the biggest and smallest digits in a number
int main() {
    int number, digit;
    int biggest = 0, smallest = 9; 

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        if (digit > biggest) {
            biggest = digit; 
        }
        if (digit < smallest) {
            smallest = digit; 
        }
        number = number / 10; 
    }

    printf("The biggest digit is: %d\n", biggest);
    printf("The smallest digit is: %d\n", smallest);

}