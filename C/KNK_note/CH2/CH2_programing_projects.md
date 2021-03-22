# 1번
**Code**
```c
// File name: pp2_1.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 1

#include <stdio.h>

int main(void)
{
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
    
    return 0;
}
```
**Output**
```
       *
      *
     *
*   *
 * *
  *
```

# 2번
**Code**
```c
// File name: pp2_2.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 2

#include <stdio.h>
#define PI 3.141592f

int main(void)
{
    int radius = 10;
    
    printf("Volume of a sphere with a 10-meter radius : %f",(4.0f / 3.0f) * radius * radius * radius * PI);
    //printf("Volume of a sphere with a 10-meter radius : %f",(4 / 3) * radius * radius * radius * PI);

    return 0;
}
```

```c
// File name: pp2_2.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 2

#include <stdio.h>
#define PI 3.141592f

int main(void)
{
    int radius = 10;
    
    //printf("Volume of a sphere with a 10-meter radius : %f",(4.0f / 3.0f) * radius * radius * radius * PI);
    printf("Volume of a sphere with a 10-meter radius : %f",(4 / 3) * radius * radius * radius * PI);

    return 0;
}
```
**Output**
```
Volume of a sphere with a 10-meter radius : 4188.790039
```

```
Volume of a sphere with a 10-meter radius : 3141.592041
```

# 3번
**Code**
```c
// File name: pp2_3.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 3

#include <stdio.h>
#define PI 3.141592f

int main(void)
{
    int radius;

    printf("Enter radius of a sphere: ");
    scanf("%d", &radius);
    
    printf("Volume of a sphere with entered radius: %f\n",(4.0f / 3.0f) * radius * radius * radius * PI);
    //printf("Volume of a sphere with entered radius : %f\n",(4 / 3) * radius * radius * radius * PI);

    return 0;
}
```
**Output**
```
Enter radius of a sphere: 10
Volume of a sphere with entered radius: 4188.790039
```

# 4번
**Code**
```c
// File name: pp2_4.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 4

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount * 1.05f);

    return 0;
}
```
**Output**
```
Enter an amount: 100.00
With tax added: $105.00
```

# 5번
**Code**
```c
// File name: pp2_5.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 5

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f\n", 3*x*x*x*x*x + 2*x*x*x*x -5*x*x*x - x*x + 7*x - 6);

    return 0;
}
```
**Output**
```
Enter x: 2
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is 92.000000
```

# 6번
**Code**
```c
// File name: pp2_6.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 6

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f\n", (((((3*x+2)*x-5)*x)-1)*x+7)*x-6);
    //It is Horner's rule

    return 0;
}
```
**Output**
```
Enter x: 2
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is 92.000000
```

# 7번
**Code**
```c
// File name: pp2_7.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int amount, bill_20 = 0, bill_10 = 0, bill_5 = 0, bill_1 = 0;

    printf("Enter a dollar amout: ");
    scanf("%d", &amount);

    bill_20 = amount / 20;
    amount %= 20;
    bill_10 = amount / 10;
    amount %= 10;
    bill_5 = amount / 5;
    bill_1 = amount % 5;

    printf("\n$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", bill_1);

    return 0;
}
```
**Output**
```
Enter a dollar amout: 93

$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
```

# 8번
**Code**
```c
// File name: pp2_8.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 8

#include <stdio.h>

int main(void)
{
    float amount, interest, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("\n");

    //convert the interest rate to a percentage and divide it by 12
    interest = 1.0f + ((interest / 100.0f) / 12.0f);

    amount *= interest;
    amount -= payment;
    printf("Balance remaining after first payment: $%.2f\n", amount);

    amount *= interest;
    amount -= payment;
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount *= interest;
    amount -= payment;
    printf("Balance remaining after third payment: $%.2f\n", amount);
    
    return 0;
}
```
**Output**
```
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
```