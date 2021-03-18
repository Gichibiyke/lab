#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter a -> ");
    scanf ("%d", &a);
    printf("Enter b -> ");
    scanf ("%d", &b);
    int sum, d;
    sum = 0;
    d = a % 10;
    sum = sum + d;
    a /= 10;
    sum = sum + a;
    int c;
    if (sum < b)
    {
        c = sum + b;
        printf("n/ sum + b = %d", c);
    }
    if (sum == b)
    {
        printf("/n Сумма цифр=  %d", b);
    }
    if (sum > b)
    {
        printf("/n sum = %d", sum);
    }
    return 0;
}
