
#include <stdio.h>
#include <stdlib.h>

#define size_lim 5


/*It works with double ptr, the array was updated with coresponded value*/
void allocate_array(int **m_array, int size, int value)
{
    /*Se foloseste doar un * petru a accesa primul nivel de dereferentiere si a obtine pointerul la inceputul array ului.*/
    *m_array = (int*)malloc(size * sizeof(int));

    if (*m_array != NULL)
    {
        for (size_t i = 0; i < size; ++i)
        {
            /*Se foloseste o * pentru a accesa primul nivel de deref (inceput array) si inca o * pentru a modifica val din array*/
            *(*m_array + i) = value;
        }
    }

}
/*
-Avem de a face un un pointer simplu catre un array, cum e un array va fi de fapt o transmitere ca si valoare, modificarea nu va avea un efect
asupra array ului nostru.
*/
void allocate_array_notWork(int * simple_ptr, int size, int value)
{
    simple_ptr = (int*)malloc(size * sizeof(int));

    if (simple_ptr != NULL)
    {
        for (size_t i = 0; i < size; ++i)
        {
            simple_ptr[i] = value;
        }
    }


}

int main()
{
    int * m_main_array = NULL;

    allocate_array(&m_main_array, size_lim, 13);

    printf("With double ptr: \n");
    for (size_t i = 0; i < size_lim; ++i)
    {
        printf("%d\n", m_main_array[i]);
    }

    int * m_simple_ptr = NULL;
    allocate_array_notWork(m_simple_ptr, size_lim, 10);
    printf("With simple ptr: \n");

    for (size_t i = 0; i < size_lim; ++i)
    {
        printf("%d\n", m_simple_ptr[i]);
    }



    return 0;
}