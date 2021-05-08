#include <stdio.h>

int evaluate_position(char (*board)[8]);

int main(void)
{
    char board[8][8] = {
    {'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'*', '*', '*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}
    };

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            printf("%2c", board[i][j]);
        putchar('\n');
    }

    printf("evaluate position : %d\n", evaluate_position(board));

    return 0;
}

int evaluate_position(char (*board)[8])
{
    int black = 0, white = 0;

    for (char *p = board[0]; p < board[0] + 64; p++)
    {
        switch (*p)
        {
            case 'r': black += 5; break;
            case 'n': black += 3; break;
            case 'b': black += 3; break;
            case 'q': black += 9; break;
            case 'p': black += 1; break;
            case 'R': white += 5; break;
            case 'N': white += 3; break;
            case 'B': white += 3; break;
            case 'Q': white += 9; break;
            case 'P': white += 1; break;
            default: break;
        }
    }

    return white - black;
}