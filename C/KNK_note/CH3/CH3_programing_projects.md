# 1번
**Code**
```c
// File name: pp3_1.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 1

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n", year,month,day);

    return 0;
}
```
**Output**
```
Enter a date (mm/dd/yyyy) : 2/17/2011
You entered the date 20110217
```

# 2번
**Code**
```c
// File name: pp3_2.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Item    \tUnit    \tPurchase\n");
    printf("        \tPrice   \tDate\n");
    printf("%-8d\t$%7.2f\t%d/%d/%d\n",item_num, unit_price, month,day,year);

    return 0;
}
```
**Output**
```
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy) : 10/24/2010
Item            Unit            Purchase
                Price           Date
583             $  13.50        10/24/2010
```

# 3번
**Code**
```c
// File name: pp3_3.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 3

#include <stdio.h>

int main(void)
{
    int gs1, group, pub, item, check;

    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &pub, &item, &check);

    printf("GS1 Prefix : %d\n", gs1);
    printf("Group identifier : %d\n", group);
    printf("Publisher code : %d\n", pub);
    printf("Item number : %d\n", item);
    printf("Check digit : %d\n", check);

    return 0;
}
```
**Output**
```
Enter ISBN : 978-0-393-97950-3
GS1 Prefix : 978
Group identifier : 0
Publisher code : 393
Item number : 97950
Check digit : 3
```

# 4번
**Code**
```c
// File name: pp3_4.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 4

#include <stdio.h>

int main(void)
{
    int one, two, three;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("( %d ) %d - %d", &one, &two, &three);
    printf("You entered %d.%d.%d\n", one, two, three);

    return 0;
}
```
**Output**
```
Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
You entered 404.817.6900
```

# 5번
**Code**
```c
// File name: pp3_6.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 5

#include <stdio.h>

int main(void)
{
    int one_one, one_two, one_three, one_four;
    int two_one, two_two, two_three, two_four;
    int three_one, three_two, three_three, three_four;
    int four_one, four_two, four_three, four_four;

    printf("Enter the numbers from 1 to 16 in any order :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &one_one, &one_two, &one_three, &one_four,
    &two_one, &two_two, &two_three, &two_four,
    &three_one, &three_two, &three_three, &three_four,
    &four_one, &four_two, &four_three, &four_four);

    printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n",
    one_one, one_two, one_three, one_four,
    two_one, two_two, two_three, two_four,
    three_one, three_two, three_three, three_four,
    four_one, four_two, four_three, four_four);

    printf("Row sums : %d %d %d %d\n",
    one_one + one_two + one_three + one_four,
    two_one + two_two + two_three + two_four,
    three_one + three_two + three_three + three_four,
    four_one + four_two + four_three + four_four);

    printf("Column sums : %d %d %d %d\n",
    one_one  + two_one + three_one + four_one,
    one_two + two_two + three_two + four_two,
    one_three + two_three + three_three + four_three,
    one_four + two_four + three_four + four_four);

    printf("Diagonal sums : %d %d\n",
    one_one + two_two + three_three + four_four,
    one_four + two_three + three_two + four_one);

    return 0;

}
```
**Output**
```
Enter the numbers from 1 to 16 in any order :
16 3 2 13 5 10 11 8 9 6 7 12 4 15 4 1

16      3       2       13
5       10      11      8
9       6       7       12
4       15      4       1

Row sums : 34 34 34 24
Column sums : 34 34 24 34
Diagonal sums : 34 34
```

# 6번
**Code**
```c
// File name: pp3_6.c
// Author: Lee Junhee
// Chapter: 3
// Problem number: 6

#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;

    printf("Enter fractions : ");
    scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The Sum is %d/%d \n", result_num, result_denom);

    return 0;
}
```
**Output**
```
Enter fractions : 5/6+3/4
The Sum is 38/24
```