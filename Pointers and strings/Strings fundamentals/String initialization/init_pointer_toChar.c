#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char * m_dynamic_array = (char*) malloc(strlen("sebastian") + 1);

    strcpy(m_dynamic_array, "sebastian");

    printf("%s", m_dynamic_array);


    return 0;
}

