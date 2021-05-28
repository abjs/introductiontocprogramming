#include <stdio.h>
#include <stdlib.h> // includes stdlib header file, allows us to use rand()
void line(char letter, int num) 
{
    printf("\n"); // moving cursor down
    for(int i = 0; i < num; i = i + 1)
    {
        printf("%c", letter);
    }
}

int diceRoll() // function with integer return type
{
    int n = 1 + rand() % 6;// rand function belongs to stdlib
    return n;
}

void main() 
{
    while(1==1)
    {
        int num = diceRoll();
        line('_', 30); // calling a function
        printf("\nHello world %d", num); // values 1 to 6
        line('_', 15);
    }
}

