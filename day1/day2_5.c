#include<stdio.h>
// string data
int main() {
    char place[16] = "bengaluru";
    printf("%s\n", place);
    printf("%12s\n", place);
    printf("%-11s**\n", place);     //left
    printf("%.4s\n", place);//This tells printf to display at most 4 characters from the string.
    //bang
    printf("%5s\n", place);//This specifies a minimum width of 5 characters for the output.
    printf("%2.4s\n", place);// 
}