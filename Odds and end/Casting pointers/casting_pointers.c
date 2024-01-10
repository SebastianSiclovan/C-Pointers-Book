#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    /*Example 1: incompatible cast, problem with conversion from int to int* => big crash*/
    int num = 8;
    //int *pi = (int*)num;
    //printf("%d\n", *pi);
    /*End of example 1*/

    /*Example 2: se realizeaza un cast al adresei var base la un pointer int (int*) => m_ptr ddevine un pointter valid care deref acceseeaza val*/
    int base = 10;
    int * m_ptr = (int*) &num;

    printf("%d\n", *m_ptr);
    /*End of example 2*/
    



    return 0;
}

