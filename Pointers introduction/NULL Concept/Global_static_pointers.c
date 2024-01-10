#include <stdio.h>

/*
-Un pointer static / global declarat, va fi initializaat cu NULL when program starts.
*/

int *global_ptr;




int main()
{
    /*Example 1: test a global pointer which is NULL at initialized part*/
    if (global_ptr == NULL)
    {
        printf("Test global ptr: Is NULL\n");
    }
    /*End of example 1*/



    return 0;
}