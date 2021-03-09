# 1번
**Code**
```c
// File name: pp4_1.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 1

#include <stdio.h>

int main(void)
{
    int ten, one, origin;

    printf("Enter a two-digit number: ");
    scanf("%d", &origin);

    ten = origin / 10;
    one = origin % 10;

    printf("The reversal is : %d\n", one * 10 + ten);

    return 0;
}
```
**Output**
```
Enter a two-digit number: 28
The reversal is : 82
```

# 2번
**Code**
```c
// File name: pp4_2.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int hundred, ten, one, origin;

    printf("Enter a three-digit number: ");
    scanf("%d", &origin);

    hundred = origin / 100;
    ten = origin % 100 / 10;
    one = origin % 100 % 10;

    printf("The reversal is : %d\n", one * 100 + ten * 10 + hundred);

    return 0;
}
```
**Output**
```
Enter a three-digit number: 123
The reversal is : 321
```

# 3번
**Code**
```c
// File name: pp4_3.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 3

#include <stdio.h>

int main(void)
{
    int hundred, ten, one;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundred, &ten, &one);

    printf("The reversal is : %d\n", one * 100 + ten * 10 + hundred);

    return 0;
}
```
**Output**
```
Enter a three-digit number: 123
The reversal is : 321
```

# 4번
**Code**
```c
// File name: pp4_4.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 4

#include <stdio.h>

int main(void)
{
    int origin, one, two, three, four, five;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &origin);

    printf("\nUsing %%o\n\n");
    printf("In octal, your number is: ");
    printf("%05o\n", origin);

    printf("\nUsing Arithmetic method\n\n");

    one = origin % 8;
    two = origin / 8 % 8;
    three = origin / 8 / 8 % 8;
    four = origin / 8 / 8 / 8 % 8;
    five = origin / 8 / 8 / 8 / 8;

    printf("In octal, your number is: ");
    printf("%d%d%d%d%d\n", five, four, three, two, one);

    return 0;
}
```
**Output**
```
Enter a number between 0 and 32767: 1953

Using %o

In octal, your number is: 03641

Using Arithmetic method

In octal, your number is: 03641
```

# 5번
**Code**
```c
// File name: pp4_5.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 5

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,
            &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 +j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total -1) % 10));

    return 0; 
}
```
**Output**
```
Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
```

# 6번
**Code**
```c
// File name: pp4_6.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 6

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6;
    int first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &j1, &i2, &j2, &i3, &j3,
            &i4, &j4, &i5, &j5, &i6, &j6);

    first_sum = j1 + j2 + j3 + j4 + j5 + j6;
    second_sum = i1 + i2 + i3 + i4 + i5 + i6;

    total = 3 * first_sum + second_sum;
    
    printf("Check digit: %d\n", 9 - ((total-1) % 10));
}
```
**Output**
```
Enter the first 12 digits of an EAN: 869148426000
Check digit: 8
```