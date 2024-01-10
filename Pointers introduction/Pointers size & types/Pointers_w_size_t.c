#include <stdio.h>
#include <stdlib.h>

/*
size_t:
-Reprezinta dimensiunea maxima pe care o poate avea un obiect in C.
-Este unsigned int deoarece nr negative nu au sens, dimensiunea va fi intotdeauna pozitiva
-Este utilizat ca si un return din sizeof, respectiv ca parametru pentru multe chestii (malloc, strlen etc)
-It is good practice atunci cand declari variabile pentru dimensiuni, cum ar fi nr de caractere, indicii din array.
-Maximum value din size_t este ___SIZE__MAX___
-De regula size_t poate fi folosit pentru a stoca un pointer, dar nu este o idee buna sa se presupuna ca are aceeasi dimens ca un pointer
-Trebuie avut grija la display ul unui size_t deoarece sunt valori unsigned si alegerea unui wrong specifier format duce la rezultate nesigure.
*/
int main()
{
    /*Example 1: using the size_t type in order to declara size of an array, indexing of array, dynamic allocation*/
    size_t size_arary = 4; // size array

    int *dynamicArray = (int *) malloc(size_arary * sizeof(int));

    /*Using size_t in order to fill indexes of array*/
    for (size_t index = 0; index < size_arary; ++index)
    {
        dynamicArray[index] = index + 1;
    }

    /*Using size_t in order to display indexes of array*/
    for (size_t index = 0; index < size_arary; ++index)
    {
        printf("%d", *(dynamicArray+index));
    }
    /*End of example 1*/





    
    
    return 0;
}