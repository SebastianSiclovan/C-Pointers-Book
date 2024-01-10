#include <stdio.h>
#include <stdlib.h>

#define size_lim 5
#define value 1

/*
-O functie care returneaza un pointer la o var locata din ea it s not a good practice. Deoarece var locala este alocata pe stiva in momentul in
care a fost apelata si dupa terminarea acestuia var locala va fi out din stiva ceea ce inseamna ca vom returna o adresa inexistenta (corupta)
*/

int * allocate_array(int size, int value_forEach_element)
{
    /*Pentru a preveni aceasta problema putem face acest array static si sa i precizam direct size ul ca number intre[]*/
    int m_local_array[size];

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

    return 0;
}