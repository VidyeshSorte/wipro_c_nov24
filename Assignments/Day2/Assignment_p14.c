#include<stdio.h>
#include<math.h>
// check if a number is perfect square
int main()
{
    unsigned int inputNumber = 0;
    int rootNumber = 0;
    printf("Enter a Number to check:");
    scanf("%u", &inputNumber);
    rootNumber = (int)sqrt(inputNumber);
    if (rootNumber * rootNumber == inputNumber)
        printf("%u is a perfect square", inputNumber);
    else
        printf("%u is not a perfect square", inputNumber);
}