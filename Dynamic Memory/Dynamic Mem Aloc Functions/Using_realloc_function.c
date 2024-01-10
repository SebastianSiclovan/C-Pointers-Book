#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Periodic este bine sa se mareasca sau sa se reduca cantitatea de memorie alocata unui pointer, este ok de exemplu daca avem o matrice cu dimensiuni
variabile => overall pentru asta se foloseste realloc()

*/


int main()
{
    /*Example 1: using realloc function for reduction*/
    char *s1;
    char *s2;

    /*Alocare dinamica cu 16 bytes*/
    s1 = (char*) malloc(16);
    /*With strcpy we will use only 13 bytes (12 characters and '\0') instead of 16*/
    strcpy(s1, "0123456789AB");

    /*Reduction with realloc, from 16 to 8*/
    s2 = realloc(s1, 8);
    /*end of example 1*/

    /*Example 2: using realloc function for maximization */
    char * another_s1;
    char * another_s2;

    another_s1 = (char *)malloc(16);
    strcpy(another_s1, "0123456789AB");

    /*Maximization with realloc, from 16 to 64*/
    another_s2 = realloc(s1, 64);
    /*End of example 2*/





    return 0;
}