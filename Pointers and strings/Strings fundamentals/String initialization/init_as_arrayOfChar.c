#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /*Variant 1*/
    char m_array[] = "sebastian";

    printf("%s\n", m_array);


    /*Variant 2*/
    char m_second_array[11];
    strcpy(m_array, "sebatian");

    printf("%s\n", m_second_array);

    return 0;
}

