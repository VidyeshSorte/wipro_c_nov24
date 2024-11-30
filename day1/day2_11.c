#include <stdio.h>
// program to find biggest of two numbers

int main()
{
    int num1 = 0, num2 = 0, nigNum = 0;
    puts("Enter 2 numbers to find biggest");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
        printf("%d is biggest", num1);
    else if (num2 > num1)
        printf("%d is biggest", num2);
    else
        printf("Both numbers are same");
}