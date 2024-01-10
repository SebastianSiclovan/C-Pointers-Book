#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
-Ca si Best practice este bine sa il initializam cu NULL in cazul in care nu suntem siguri cu ce sa initializam pointerul nostru.
*/

int main()
{
    int * ptr = NULL;

    if (ptr == NULL)
    {
        printf("This pointer is NULL, please do not deref it");
    }

    return 0;
}

