/*
-The concept of null is interesting si uneori prost inteles.
-Avem adesea tangenta cu mai multe concepte similare si poate aparea confuzia, cum ar fi:
• The null concept
• The null pointer constant
• The NULL macro
• The ASCII NUL
• A null string
• The null statement


-A null pointer should never be dereferenced because it does not contain a valid address. When executed it will result in the program terminating
*/



#include <stdio.h>


int main()
{
    /*example 1: NULL pointers always are equal */
    int * ptr = NULL;
    int *ptr_2 = NULL;

    if (ptr == ptr_2)
        printf("yeah");
    else
    {
        // do nothing

    }
        
    /*End of example 1*/

    /*example 2: diference between NULL ptr and uninitialized ptr*/
    int * uninitialized_ptr;
    int * NULL_ptr = NULL;
    printf("%x\n", uninitialized_ptr); // random value for unitialized pointer
    printf("%x\n", NULL_ptr); // only 0 for NULL pointer
    /*End of example 2*/

    /*Example 3: test a NULL ptr*/
    int * ptr_1 = NULL;
    if (ptr_1)
    {
        printf("Is not NULL\n");
    }
    else
    {
        printf("Is NULL\n");
    }




    
    


    return 0;
}