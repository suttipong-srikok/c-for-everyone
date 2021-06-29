/*  Assert.c
    
    user asserts within a trivial program
    Sammy Programmer
    August 25,2019
*/

#define NDEBUG   //goes befor <assert.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    

    assert(0);
    printf("My program runs\n");
    return 0;
}
