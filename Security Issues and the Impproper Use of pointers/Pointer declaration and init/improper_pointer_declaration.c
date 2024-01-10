#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*For example 2*/
#define PINT int*

/*For example 3*/
typedef int* THIS_IS_POINTER;



int main()
{
    /*Example 1:*/

    /*DECLARATIE GRESITA: Problema de citire, se poate intelege ca doar ptr1 este un pointer la un int, iar ptr 2 este doar un int*/
    int* ptr1, ptr2;

    /*DECLARATIE CORECTA*/
    int* ptr_1, *ptr_2;

    /*End of example 1*/

    /*Example 2: macro pentru a avea un data type declarat*/

    
    PINT m_ptr, n_ptr;

    /*End of example 2*/

    /*Example 3: o abordare mai buna decat folosirea unui define este cu un typedef*/

    THIS_IS_POINTER ptr;

    int x = 10;

    ptr = &x;

    printf("%d\n", *ptr);



    return 0;
}

