#include <stdio.h>
#include <stdlib.h>

/*
-La un pointer global nu se poate aloca memorie dinamic, chiar si daca prima data se face declararea si dupa urm linie de cod va fi init cu malloc
EX:
    global: int * ptr = (int*) mallloc(sizeof(int)) => error
-La un pointer static se poate aloca memorie dinamic doar daca in prima faza se face declararea si in urm linie se face init cu malloc.
EX: 
    static int * ptr = (int*)malloc(sizeof(int)); => error

    static int * ptr;
    ptr = (int*)malloc(sizeof(int)); => is OK, without error.
*/


int * ptr;
//ptr = (int*) malloc(sizeof(int));

int main()
{
    static int * ptr_2; 
    ptr_2 = (int*)malloc(sizeof(int));

    return 0;
}