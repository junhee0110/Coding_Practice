// File name: pp8_9.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 9

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    char array[10][10];
    int x_pos = 0, y_pos = 0, choice, x_temp, y_temp;
    bool tried[4] = {false};

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
            array[x][y] = '.';
    }
    array[0][0] = 'A';

    srand((unsigned)time(NULL));

    for (char x = 'B'; x <= 'Z'; x++)
    {
        for (int x = 0; x < 4; x++)
            tried[x] = false;

        while(1)
        {
            choice = rand() % 4;
            switch (choice)
            {
                case 0: x_temp = x_pos + 1; y_temp = y_pos; break;
                case 1: x_temp = x_pos; y_temp = y_pos + 1; break;
                case 2: x_temp = x_pos - 1; y_temp = y_pos; break;
                case 3: x_temp = x_pos; y_temp = y_pos -1; break;
            }

            //Check (a)
            if (x_temp < 0 || x_temp > 9 || y_temp < 0 || y_temp > 9)
                tried[choice] = true;

            //Check (b)
            else if (array[x_temp][y_temp] != '.')
                tried[choice] = true;
            
            else break;

            if (tried[0] && tried[1] && tried[2] && tried[3])
                goto print;
        }
        x_pos = x_temp;
        y_pos = y_temp;
        array[x_pos][y_pos] = x;
    }
    print:
    
    for(int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
            printf("%c ", array[x][y]);
        printf("\n");
    }

    return 0;
}