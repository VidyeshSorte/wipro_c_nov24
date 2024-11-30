/*
Find sum of the series: n - n2/3 + n4/5 - 
n8/7 + .... m terms (1<=n<=3,1<=m<=10)
*/

#include <stdio.h>
#include <math.h>

int main() {
    double n, sum = 0.0, term;
    int m;

    printf("Enter the value of n (1 <= n <= 3): ");
    scanf("%lf", &n);

    if (n < 1 || n > 3) 
    {
        printf("Invalid input. n must be between 1 and 3.\n");
        return 1;
    }

    printf("Enter the number of terms m (1 <= m <= 10): ");
    scanf("%d", &m);

    // Validate m
    if (m < 1 || m > 10) 
    {
        printf("Invalid input. m must be between 1 and 10.\n");
        return 1;
    }

    int exponent = 1;
    int denominator = 1;

    for (int i = 1; i <= m; i++) 
    {
        term = pow(n, exponent) / denominator;
        if (i % 2 == 0) 
        {
            term = -term;
        }
        sum += term;

        exponent *= 2;
        denominator += 2;
    }

    printf("The sum of the series is: %.6lf\n", sum);

    return 0;
}