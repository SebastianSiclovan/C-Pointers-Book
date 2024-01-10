#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Test pentru NULL atunci cand se face o alocare dinamica*/

int main()
{
    int * m_array = (int*) malloc(20 * sizeof(int));

    if (m_array == NULL)
    {
        printf("Failed to mem allocation\n");
    }


    return 0;
}

