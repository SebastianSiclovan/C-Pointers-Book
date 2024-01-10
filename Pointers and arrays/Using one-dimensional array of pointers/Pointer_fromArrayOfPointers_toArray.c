#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int *m_pointers_array[5];

    for (size_t i = 0; i < 5; i++)
    {
        m_pointers_array[i] = (int*)malloc(sizeof(int));
    }

    int new_array[5] = {1, 2, 3, 4, 5};

    m_pointers_array[0] = new_array;

    for (size_t i = 0; i < 5; ++i)
    {
        printf("%d", *(*(m_pointers_array + 0) + i)); // sau printf("%d", *(m_pointers_array[0] + i));
    }



    return 0;
}
