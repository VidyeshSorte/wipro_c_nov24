#include <stdio.h>
// a

int main()
{
    int foodNumber = 0;
    puts("Welcome to our hotel");
    puts("1:Idly-Vada 2:Dosa 3:Poha 4: Aloo Paratha 5:Roti-Sabji. Your Choice Please:");
    scanf("%d", &foodNumber);
    switch(foodNumber)
    {
        case 1 : puts("Yummy Inli vada"); break;
        case 2 : puts("Tasty Mysuru Dosa"); break;
        case 3 : puts("Wsoft bhopal poha"); break;
        case 4 : puts("spicy punjabi paratha"); break;
        case 5 : puts("hot and sweet roti sabji "); break;
        default : puts("sorry we dont have food of of your choice"); break;
    }
}