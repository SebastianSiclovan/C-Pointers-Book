#include <stdio.h>

/*
Nealocarea memoriei:
-Folosirea unui pointer care nu indica care o zona de memorie => contine o memorie garbage care duce la o adresa invalida
*/


int main()
{
    int * m_ptr;

    printf("%d", *m_ptr);

    return 0;
}