#include <stdio.h>
#include <stdlib.h>



int main()
{

    int * m_array_pointers[5];

    for (size_t i = 0; i < 5; ++i)
    {
        m_array_pointers[i] = (int*) malloc(sizeof(int));

        *m_array_pointers[i] = i;
    }

    printf("Adress of pointer from index 0 array: %x\n ", (m_array_pointers+0));
    printf("Adresa pentru care pointeaza pointerul de pe index ul 0 din array: %x\n ", *(m_array_pointers+0));
    printf("Dereferentierea pointerului de pe index ul 0 din array: %d\n", **(m_array_pointers+0));
    

    


    


    return 0;
}

