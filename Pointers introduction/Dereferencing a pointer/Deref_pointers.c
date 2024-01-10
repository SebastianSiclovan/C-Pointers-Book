#include <stdio.h>



/*
-Se face prin indirection operator, adica *
*/

int main()
{
    int m_adress = 10;
    int * ptr = &m_adress;

    printf("%d", *ptr);
    return 0;
}