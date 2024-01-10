#include <stdio.h>
#include <stdlib.h>

/*
-O buna practica pentru un programator este sa si creeze propria functie free, deoarece functia free obisnuita doar dezaloca memoria, nu
seteaza si acel pointer catre NULL.
*/



/*
-Se utilizeaza pointer la pointer (double ptr) pentru a putea i face modify la pointerul tansmis.
-Se utilizeaza void pentru all types posibles

*/

#define size 5


void saferFree(void **point_to_point)
{
    if (point_to_point != NULL && *point_to_point != NULL)
    {
        free(*point_to_point);
        *point_to_point = NULL;
    }
}

int main()
{

    int * main_ptr = (int*) malloc(size * sizeof(int));

    for (size_t i = 0; i < size; ++i)
    {
        main_ptr[i] = 1;
    }

    printf("Before using free: \n");
    for (size_t i = 0; i < size; ++i)
    {
        printf("%d\n", main_ptr[i]);
    }

    printf("After using free: \n");
    /*Adaugare type cast la void** pentru a functiona */
    saferFree((void**)main_ptr);

    for (size_t i = 0; i < size; ++i)
    {
        printf("%d\n", main_ptr[i]);
    }




    return 0;
}

