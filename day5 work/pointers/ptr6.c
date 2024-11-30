#include <stdio.h>
int main()
{
    float num = 2.22;
    float *ptr = &num; // address of num is assigned to ptr
                       //now ptr is pointing towards num
    printf("Value of num = %.2f \n", num);
    printf("Value of num = %.2f \n", *(&num));
    printf("Value of num = %f \n", *ptr);
    printf("Address of num = %p  %u \n", &num, &num);
    printf("Address of num %p  %u \n", ptr, ptr);
    printf("Address of num = %p \n", *(&ptr));
    printf("Value of ptr = %p  %u \n", ptr, ptr);
    printf("Value of ptr = %p  %u \n", &num, &num);
    printf("Address of ptr =  %p  %u \n", &ptr, &ptr);
    
}