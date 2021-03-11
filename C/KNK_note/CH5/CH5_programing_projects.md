# 1번
**Code**
```c
// File name: pp5_1.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 1

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number / 1000)
        printf("The number %d has a 4 digits\n", number);
    else if(number / 100)
        printf("The number %d has a 3 digits\n", number);
    else if(number / 10)
        printf("The number %d has a 2 digits\n", number);
    else
        printf("The number %d has a 1 digits\n", number);

    return 0;
}
```
**Output**
```
Enter a number: 374
The number 374 has a 3 digits
```

# 2번
**Code**
```c
// File name: pp5_2.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    printf("Equivalent 12-hour time: ");
    if (hour == 0)
        printf("12:%d AM\n", minute);
    else if (hour < 12)
        printf("%d:%d AM\n", hour, minute);
    else if (hour == 12)
        printf("12:%d PM\n", minute);
    else
        printf("%d:%d PM\n", hour - 12, minute);

    return 0;
}
```
**Output**
```
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
```

# 3번
**Code**
```c
// File name: pp5_3.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 3

#include <stdio.h>

int main(void)
{
    float commission, rival, price, value;
    int  shares;

    printf("Enter the number of shares : ");
    scanf("%d", &shares);
    printf("Enter the price per share : ");
    scanf("%f", &price);

    value = shares * price;

    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.006f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;

    commission = commission < 39.00f ? 39.00f : commission;

    rival = shares < 2000 ? 33 + 0.03 * shares : 33 + 0.02 * shares;

    printf("Commission of origimal broker: $%.2f\n", commission);
    printf("Commission of rival broker: $%.2f\n", rival);

    return 0;
}
```
**Output**
```
Enter the number of shares : 3000
Enter the price per share : 10
Commission of origimal broker: $166.00
Commission of rival broker: $93.00
```

# 4번
**Code**
```c
// File name: pp5_4.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 4

#include <stdio.h>

int main(void)
{
    float wind;

    printf("Enter Wind Speed (in knots) : ");
    scanf("%f", &wind);

    printf("The corresponding description is ");

    if (wind < 1)
        printf("Calm\n");
    else if (wind <= 3)
        printf("Light air\n");
    else if (wind <= 27)
        printf("Breeze\n");
    else if (wind <= 47)
        printf("Gale\n");
    else if (wind <= 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}
```
**Output**
```
Enter Wind Speed (in knots) : 65
The corresponding description is Hurricane
```

# 5번
**Code**
```c
// File name: pp5_5.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 5

#include <stdio.h>

int main(void)
{
    float income;

    printf("Enter your income : ");
    scanf("%f", &income);

    printf("Tax is ");

    if (income < 750)
        printf("$%.2f\n", income * 0.01f);
    else if (income <= 2250)
        printf("$%.2f\n", income * 0.02f + 7.50f);
    else if (income <= 3750)
        printf("$%.2f\n", income * 0.03f + 37.50f);
    else if (income <= 5250)
        printf("$%.2f\n", income * 0.04f + 82.50f);
    else if (income <= 7000)
        printf("$%.2f\n", income * 0.05f + 142.50f);
    else
        printf("$%.2f\n", income * 0.06f + 230.00f);

    return 0;
}
```
**Output**
```
Enter your income : 6000
Tax is $442.50
```

# 6번
**Code**
```c
// File name: pp5_6.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 6

#include <stdio.h>

int main(void)
{
        int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit,
        first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,
            &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &check_digit);

    first_sum = d + i2 + i4 + j1 + j3 +j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    if (check_digit == 9 - ((total -1) % 10))
        printf("UPC Code is VALID\n");
    else
        printf("UPC Code is NOT VALID\n");

    return 0;
}
```
**Output**
```
Enter the first 11 digits of a UPC: 013800151735
UPC Code is VALID
```

# 7번
**Code**
```c
// File name: pp5_7.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    int min1, max1, min2, max2;

    printf("Enter four integers : ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 < num2)
    {
        min1 = num1;
        max1 = num2;
    }
    else
    {
        min1 = num2;
        max1 = num1;
    }

    if(num3 < num4)
    {
        max2 = num4;
        min2 = num3;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }

    if(max1 > max2)
        printf("Largest : %d\n", max1);
    else
        printf("Largest : %d\n", max2);

    if(min1 > min2)
        printf("Smallest : %d\n", min2);
    else
        printf("Smallest : %d\n", min1);
    
    return 0;
}
```
**Output**
```
Largest : 43
Smallest : 10
```

# 8번
**Code**
```c
// File name: pp5_8.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 8

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time : ");
    scanf("%d : %d", &hour, &minute);

    //480, 583 679 767 840 945 1140 1305;
    if (60 * hour + minute < 532)
        printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (60 * hour + minute < 631)
        printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (60 * hour + minute < 723)
        printf("Closet departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (60 * hour + minute < 804)
        printf("Closet departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (60 * hour + minute < 893)
        printf("Closet departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (60 * hour + minute < 1043)
        printf("Closet departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (60 * hour + minute < 1223)
        printf("Closet departure time is 7:00 p.m., arriving at 9:25 p.m.\n");
    else
        printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
```
**Output**
```
Enter a 24-hour time : 13:15
Closet departure time is 12:47 p.m., arriving at 3:00 p.m.
```

# 9번
**Code**
```c
// File name: pp5_9.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 9

#include <stdio.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d / %d / %d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d / %d / %d", &month2, &day2, &year2);

    if (year1 * 12 + month1 > year2 * 12 + month2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
    else if (year1 * 12 + month1 < year2 * 12 + month2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
    else
    {
        if (day1 > day2)
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
        else if (day2 > day1)
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
        else
            printf("Two dates are same\n");
    }

    return 0;
}
```
**Output**
```
Enter first date (mm/dd/yy) : 3/6/08
Enter second date (mm/dd/yy) : 5/17/07
5/17/07 is earlier than 3/6/08
```

# 10번
**Code**
```c
// File name: pp5_10.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 10

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade : ");
    scanf("%d", &grade);
    printf("Letter grade : ");

    switch(grade / 10)
    {
        case 10:
            if (grade == 100)
                printf("A\n");
            else
                printf("Error\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F\n");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}
```
**Output**
```
Enter numerical grade : 84
Letter grade : B
```

# 11번
**Code**
```c
// File name: pp5_11.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 11

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a two-digit number : ");
    scanf("%d", &number);

    printf("You entered the number ");

    if(number < 20)
    {
        switch (number)
        {
        case 10: printf("ten\n"); break;
        case 11: printf("eleven\n"); break;
        case 12: printf("twelve\n"); break;
        case 13: printf("thirteen\n"); break;
        case 14: printf("twelve\n"); break;
        case 15: printf("fifteen\n"); break;
        case 16: printf("sixteen\n"); break;
        case 17: printf("seventeen\n"); break;
        case 18: printf("eighteen\n"); break;
        case 19: printf("nineteen\n"); break;
        default: break;
        }
    }

    else{
        switch (number / 10)
        { 
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
            default: break;
        }

        switch (number % 10)
        {
            case 1: printf("-one\n"); break;
            case 2: printf("-two\n"); break;
            case 3: printf("-three\n"); break;
            case 4: printf("-four\n"); break;
            case 5: printf("-five\n"); break;
            case 6: printf("-six\n"); break;
            case 7: printf("-seven\n"); break;
            case 8: printf("-eight\n"); break;
            case 9: printf("-nine\n"); break;
            default: break;
        }
    }
    return 0;
}
```
**Output**
```
Enter a two-digit number : 45
You entered the number forty-five
```