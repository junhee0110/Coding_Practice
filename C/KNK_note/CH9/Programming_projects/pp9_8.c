// File name: pp9_8.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 8

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int win = 0, loses = 0;
    char command;

    srand((unsigned) time(NULL));

    for (; ;)
    {
        if(play_game())
            win++;
        else
            loses++;

        printf("Play again? ");
        command = getchar();
        while(getchar() != '\n');
        putchar('\n');
        
        if(command != 'y' && command != 'Y')
            break;
    }

    printf("Wins: %d Losses: %d\n",win, loses);

    return 0;
}

int roll_dice(void)
{
    int dice1, dice2;
        
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    return dice1 + dice2;
}

bool play_game(void)
{
    int roll, point;

    printf("You rolled: %d\n", (roll = roll_dice()));
    
    if (roll == 7 || roll == 11)
    {
        printf("You win!\n\n");
        return true;
    }
    else if (roll == 2 || roll == 3 || roll == 12)
    {
        printf("You lose!\n\n");
        return false;
    }
    else
        printf("Your point is %d\n", (point = roll));

    for (;;)
    {
        printf("You rolled: %d\n", (roll = roll_dice()));
        if (roll == point)
        {
            printf("You win!\n\n");
            return true;
        }
        else if (roll == 7)
        {
            printf("You lose!\n\n");
            return false;
        }
    }
}