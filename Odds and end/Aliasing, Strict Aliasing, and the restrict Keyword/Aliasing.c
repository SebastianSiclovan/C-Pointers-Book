#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Un pointer este alias a altui pointer daca ambii pointeaza catre aceeasi zona de memorie, este cva neobisnuit si pot aparea probleme.
*/

int main()
{
    int m_number = 10;
    int* ptr_1 = &m_number;
    int* ptr_2 = &m_number;


    return 0;
}

