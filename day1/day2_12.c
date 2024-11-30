#include <stdio.h>
// program to find biggest of 3 numbers

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, smallNum = 0;
    puts("Enter 3 numbers to find smallest");
    scanf("%d%d%d", &num1, &num2, &num3);
    smallNum = (num1 < num2 && num1 <num3) ? num1 : (num2 < num3) ? num2 : num3;
    printf("%d is smallest", smallNum);
}