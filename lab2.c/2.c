#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf ("Enter x { -1.0 < x < 1.0 } -> ");
    scanf ("%lf", &x);
    if (-1.0 < x && x < 1.0)
    {
        double y = log((1.0 + x) / (1.0 - x));
        double z = (y * y) / (1.0 + y);
        printf ("y(x) = %lf\n", y);
        printf ("z(x) = %lf\n", z);
    }
    else
        printf ("x value is incorrect !\n");
    return 0;
}
