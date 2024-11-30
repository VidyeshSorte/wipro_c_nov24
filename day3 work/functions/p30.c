#include <stdio.h>
// Find sum of Even placed digits in a number

int sumEvenPlacedDigits(int number) 
{
    int sum = 0;
    int position = 1;
    int digit;

    while (number != 0) 
    {
        digit = number % 10;
        if (position % 2 == 0)
            sum += digit;
        number = number / 10;
        position++;
    }

    return sum;
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumEvenPlacedDigits(number);
    printf("The sum of even-placed digits is: %d\n", result);

    return 0;
}