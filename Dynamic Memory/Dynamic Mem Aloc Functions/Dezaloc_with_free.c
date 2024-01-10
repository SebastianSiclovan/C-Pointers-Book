#include <stdio.h>
#include <stdlib.h>


/*
-Dupa eliberarea cu free => pointerul va contine garbage memory
*/
int main()
{
    int * m_address = (int*)malloc(sizeof(int));

    free(m_address);



    return 0;
}