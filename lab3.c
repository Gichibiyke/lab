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
    for (i = 0; i <= n; i++ )
    {
        x = x0 + i * h;
        if ( x <= 0 )
            f = (cos(x + (x * x * x)));
        else
            f = exp (-x * x) - (x * x) + (2.0 * x);
        printf(" %f\t %f\n", x, f);
    }
    return 0;
}
