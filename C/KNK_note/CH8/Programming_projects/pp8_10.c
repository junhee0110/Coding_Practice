// File name: pp8_10.c
// Author: Lee Junhee
// Chapter: 8
// Problem number: 10

#include <stdio.h>
#define LEN_ARRAY ((int) sizeof(departure) / sizeof(departure[0]))

int main(void)
{
    int hour, minute;
    int departure[8] =  {8 * 60, 
                        9 * 60 + 43,
                        11 * 60 + 43,
                        12 * 60 + 47,
                        14 * 60,
                        15 * 60 + 45,
                        19 * 60,
                        21 * 60 + 45};
    int arrival[8] =    {10 * 60 + 16,
                        11 * 60 + 52,
                        13 * 60 + 31,
                        15 * 60,
                        16 * 60 + 8,
                        17 * 60 + 55,
                        21 * 60 + 20,
                        13 * 60 + 58};

    printf("Enter a 24-hour time : ");
    scanf("%d : %d", &hour, &minute);

    for (int i = 0; i < LEN_ARRAY; i++)
    {
        if (hour * 60 + minute < (departure[i] + departure[i + 1]) / 2)
        {
            if (departure[i] / 60 > 12)
                printf("Closest departure time is %d:%02d p.m., ", departure[i] / 60 - 12, departure[i] % 60);

            else if (departure[i] / 60 == 12)
                printf("Closest departure time is 12:%02d p.m., ", departure[i] % 60);

            else if (departure[i] / 60 < 12)
                printf("Closest departure time is %d:%02d a.m., ", departure[i] / 60, departure[i] % 60);

            if (arrival[i] / 60 > 12)
                printf("arriving at %d:%02d p.m.\n", arrival[i] / 60 - 12, arrival[i] % 60);

            else if (arrival[i] / 60 == 12)
                printf("arriving at 12:%02d p.m.\n", arrival[i] % 60);

            else if (arrival[i] / 60 < 12)
                printf("arriving at %d:%02d a.m.\n", arrival[i] / 60, arrival[i] % 60);

            break;
        }

        if (i == LEN_ARRAY - 2)
        {
            if (departure[LEN_ARRAY - 1] / 60 > 12)
                printf("Closest departure time is %d:%02d p.m., ", departure[LEN_ARRAY - 1] / 60 - 12, departure[LEN_ARRAY - 1] % 60);

            else if (departure[LEN_ARRAY - 1] / 60 == 12)
                printf("Closest departure time is 12:%02d p.m., ", departure[LEN_ARRAY - 1] % 60);

            else if (departure[LEN_ARRAY - 1] / 60 < 12)
                printf("Closest departure time is %d:%02d a.m., ", departure[LEN_ARRAY - 1] / 60, departure[LEN_ARRAY - 1] % 60);

            if (arrival[LEN_ARRAY - 1] / 60 > 12)
                printf("arriving at %d:%02d p.m.\n", arrival[LEN_ARRAY - 1] / 60 - 12, arrival[LEN_ARRAY - 1] % 60);

            else if (arrival[LEN_ARRAY - 1] / 60 == 12)
                printf("arriving at 12:%02d p.m.\n", arrival[LEN_ARRAY - 1] % 60);

            else if (arrival[LEN_ARRAY - 1] / 60 < 12)
                printf("arriving at %d:%02d a.m.\n", arrival[LEN_ARRAY - 1] / 60, arrival[LEN_ARRAY - 1] % 60);
        }
    }

    return 0;
}