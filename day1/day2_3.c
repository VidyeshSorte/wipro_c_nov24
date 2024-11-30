#include<stdio.h>
int main() 
{
    int num = 7955;
    printf("%d \n", num);       // 7955
    printf("%6d \n", num);      //  7955
    printf("%-6d \n", num);     //7955
    printf("%-6d** \n", num);   //7955  **
    printf("%07d \n", num);     //0007955
    printf("%3d \n", num);      // 7955
}