#include<stdio.h>
int main() 
{
    float num = 795.067;
    printf("%f \n", num);       //num
    printf("%12f \n", num);     // 12 placed right alignment
    printf("%-14f \n", num);    // 14 spaces left alignment
    printf("%014f \n", num);    //14 spaces right alignment
    printf("%.2f \n", num);
    printf("%0.81f \n", num);
    printf("%-8.1f \n", num);
    printf("%05.0f \n", num);
}