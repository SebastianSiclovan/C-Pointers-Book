#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Un pointer care nu a fost initializat este de fapt un wild pointer si folosirea acestuia duce la undefined behavoirs/
*/

int main()
{
    /*Example 1: use a wild pointer*/
    int* ptr_not_initialized;

    printf("%d\n", *ptr_not_initialized);
    /*End of example 1*/

    


    return 0;
}

