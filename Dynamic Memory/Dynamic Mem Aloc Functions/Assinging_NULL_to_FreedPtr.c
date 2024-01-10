#include <stdio.h>
#include <stdlib.h>
/*
-Dupa free la un ptr se va assigna NULL pentru a arata cumva ca acea adresa este invalida.
*/
int main()
{
    int * m_ptr = (int*)malloc(sizeof(int));

    free(m_ptr);

    m_ptr = NULL;

    
    return 0;
}