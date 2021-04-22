#include <stdio.h>
#include <math.h>
int main()
{
 float x, f, h;
 unsigned long int i , n;
 printf( "Enter h ->\n" );
 scanf( ""%f,  &h );
 printf( “x\t\tf(x)\n” );
 printf( “------------------------\n” );
 n = ( 2.0f  / h ) + 1 ;
 i = 0;
 do
  {
      if ( x >= 0.0f && x <= 1.0f )
        f =  cos( x + x * x * x )
      else
        f = exp(-x * x) – x * x + 2 * x
      printf( “%f\t%f\n”,  x,  f );
      x = i*h;
      i += 1;
    }
while( i <=  n );
return 0;
}
