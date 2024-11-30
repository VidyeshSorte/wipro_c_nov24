#include <stdio.h>

int nonStaticSum(int num) {
    int sum = 0;
    sum += num;
    return sum;
}

// Static function
int staticSum(int num) {
    static int sum = 0;
    sum += num;
    return sum;
}

int main() {
    int value;

    value = nonStaticSum(5);
    printf("Non-static sum after adding 5: %d\n", value);
    value = nonStaticSum(10);
    printf("Non-static sum after adding 10: %d\n", value);
    value = nonStaticSum(15);
    printf("Non-static sum after adding 15: %d\n", value);

    printf("\n");

    value = staticSum(5);
    printf("Static sum after adding 5: %d\n", value);
    value = staticSum(10);
    printf("Static sum after adding 10: %d\n", value);
    value = staticSum(15);
    printf("Static sum after adding 15: %d\n", value);

    return 0;
}

/* Explanation:
nonStaticSum(int num):

-The variable sum is a local variable, 
initialized to 0 every time the function is called.
-Each call only adds the current num to the local sum, 
which is reset to 0 after the function ends.

-The variable sum is declared static and retains its value between function calls.
Each call adds the current num to the cumulative sum, which is preserved across calls.

Outputs:
Non-static sum after adding 5: 5
Non-static sum after adding 10: 10
Non-static sum after adding 15: 15

Static sum after adding 5: 5
Static sum after adding 10: 15
Static sum after adding 15: 30

Explanation of Output:

Non-static Function:
Each call starts with a new sum = 0.
Only the passed value is added in that particular call, 
so the output corresponds directly to the input values.

Static Function:
The first call initializes sum = 0, then adds 5 (resulting in 5).
The second call uses the same sum (which is 5 from the previous call), then adds 10 (resulting in 15).
The third call continues with the cumulative sum (15) and adds 15 (resulting in 30).*/