#include <stdio.h>
#include <stdlib.h>

#define size_lim 5
#define value 1

/*
Cand se returneaza un pointer dintr-o functie pot aparea probleme cum ar fi:
-Returnarea unui uninitialized ptr
-Returnarea unui pointer la o adresa invalida
-Returnarea unui pointer catre o variabila locala
-Returnarea unui pointer dar fara a-i face free

*/

/*
-Returning a local ptr, it s not a good practice but it works :)
*/
int * allocate_array(int size, int value_forEach_element)
{
    int *m_local_array = (int*)malloc(size * (sizeof(int)));

    for (size_t index = 0; index < size; ++index)
    {
        m_local_array[index] = value_forEach_element;
    }

    return m_local_array;
}

int main()
{
    int * m_array = allocate_array(size_lim, value);

    for (size_t i = 0; i < size_lim; i++)
    {
        printf("%d\n", m_array[i]);
    }

    /*Free after using */
    printf("Now we are using free function!\n");
    free(m_array);


    for (size_t i = 0; i < size_lim; i++)
    {
        printf("%d\n", m_array[i]);
    }



    return 0;
}