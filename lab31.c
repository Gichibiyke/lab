#include <stdio.h>
#include <math.h>
int main()
{
    float x, n, h, f, x0;
    int i;
    printf ("Enter h\n");
    scanf("%f", &h);
    printf("x f(x)\n");
    scanf("-----------------------\n");
    n = (2.0 / h ) + 0.9;
    x0 = 0;
    do
    {
        x = x0 + i * h;
        if ( x <= 1 )
            f = (cos(x + (x * x * x)));
        else
            f = exp (-x * x) - (x * x) + (2.0 * x);
        printf(" %f %f\n", x, f);
        i++;
    }
    while(i <= n);
    return 0;
}
