#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 32


/*
-Pointerii sunt legati de o limita inferioara sau superioara in ceea ce priveste spatiul de adresa accesibil.
*/

int main()
{
    /*Example 1: utilizare 2 pointeri la array pentru a indica sfarsitul si inceputul (ca niste iteratori din C++)*/
    int array[5] = {1, 2, 3, 4, 5};
    int *start = array;  // Pointer către începutul array-ului
    int *end = array + 5;  // Pointer către un element după ultimul element al array-ului

    for (int *ptr = start; ptr < end; ++ptr) {
        printf("%d\n", *ptr);
    }
    /*End of example 1*/

    /*Example 2: verificare daca un pointer se afla in limitele unui array.*/

    char name[SIZE];
    char *p = name;
    if(name != NULL)
    {
        if(p >= name && p < name+SIZE) 
        {
            printf("pointer - continue\n");
        } else 
        {
            printf("Invalid pointer - error condition\n");
        }
    }




    return 0;
}

