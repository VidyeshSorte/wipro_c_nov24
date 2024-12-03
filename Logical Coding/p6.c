//Implement Karpekar's constant program. Print the number of 
// times the logic of finding the difference of 2 numbers had to be iterated.

#include <stdio.h>
#include <stdlib.h>

int sortDigits(int num, int ascending) {
    int digits[4] = {0};
    int i, j, temp;

    // Extract digits
    for (i = 0; i < 4; i++) {
        digits[i] = num % 10;
        num /= 10;
    }

    // Sort digits
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if ((ascending && digits[i] > digits[j]) || (!ascending && digits[i] < digits[j])) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }

    // Form the sorted number
    int sortedNum = 0;
    for (i = 0; i < 4; i++) {
        sortedNum = sortedNum * 10 + digits[i];
    }

    return sortedNum;
}

void kaprekarRoutine(int num) {
    int count = 0;

    while (num != 6174) {
        int asc = sortDigits(num, 1);
        int desc = sortDigits(num, 0);
        num = desc - asc;             // Kaprekar operation
        count++;
        printf("Iteration %d: %d - %d = %d\n", count, desc, asc, num);

        if (num == 0) {
            printf("Invalid input! All digits are the same.\n");
            return;
        }
    }

    printf("Kaprekar's constant reached in %d iterations.\n", count);
}

int main() {
    int num;

    // Input a 4-digit number
    printf("Enter a 4-digit number (not all digits same): ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input! Enter a 4-digit number.\n");
        return 1;
    }

    kaprekarRoutine(num);

    return 0;
}