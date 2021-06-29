/*  As_math.c
    
    user asserts within a trivial program
    Sammy Programmer
    August 25,2019
*/

#include <assert.h>
#include <stdio.h>

int main()
{
    double x, y;
    while(1)
    {
        printf("Read in 2 floats:\n");
        scanf("%lf  %lf", &x, &y);
        assert(y != 0);
        printf("when divided x/y = %f\n", x/y);
    }
    return 0;
}
