#include <stdio.h>
#include <stdlib.h>

#define size_lim 5
#define value 1

/*
-Cand se face passing de pointer catre o functie este bine sa se faca check la acel pointer, daca este NULL sau nu.
*/


int * allocate_array(int * m_local_array, int size, int value_forEach_element)
{
    if (m_local_array != NULL)
    {
        for (size_t index = 0; index < size; ++index)
        {
            *(m_local_array + index) = value_forEach_element;
        }
    }

    return m_local_array;
    

}

int main()
{
    int *m_main_array= (int*)malloc(size_lim * (sizeof(int)));
    allocate_array(m_main_array, size_lim, value);

    for (size_t i = 0; i < size_lim; i++)
    {
        printf("%d\n", m_main_array[i]);
    }

    return 0;
}


