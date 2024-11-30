#include <stdio.h>

// Observe the prototypes of both the functions are same
double findSum(double, double);
double findProduct(double, double);

double findSum(double num1, double num2)
{
    return num1 + num2;
}

double findProduct(double num1, double num2)
{
    return num1 * num2;
}

double findSquare(double num)
{
    return num * num;
}

int main()
{
    double (*fptr)(double, double);
    fptr = &findSum; // fprt = findSum
    double sum = fptr(25, 35.05); // this calls the func
    // that fptr points to. which is findSum in this case
    printf("Sum = %lf \n", sum);
    fptr = findProduct; // in func pointers, func calling can be done this way too
    // and the way dont in line 25,26
    printf("Product = %.2lf", fptr(2.5, 4.5));
}