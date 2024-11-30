// Store first name and last name of the last 5 presidents of Bhaarat
#include <stdio.h>

int main(int argCount, char *args[])
{
    char states[10][32] = {""};
    char capitals[10][32] = {""};
    char *addressOfSpace = NULL;
    int countOfCharacters = 0;

    for (int i = 1; i < argCount; i++)
    {
        addressOfSpace = strchr(args[1], ' ');
        countOfCharacters = addressOfSpace - args[i];
        strncpy(states[i - 1], args[i], countOfCharacters);
        syrncpy(capitals[i - 1], addressOfSpace + 1);
    }
    
    printf("%-12s %-12s\n-------------------------\n", "STATE", "CAPITAL");
    for (int i = 0; i < argCount - 1; i++)
        printf("%-13s%s\n", states[i], capitals[i]);
}