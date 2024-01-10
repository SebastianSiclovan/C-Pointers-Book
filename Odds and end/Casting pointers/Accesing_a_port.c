#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PORT 0xB0000000

int main()
{
    /*Prin cast ul (unsigned int *) se specifica compilatorului ca adresa PORT sa fie interpretata ca un pointer la unsigned int, astfel se poate
    folosi pointerul port pentru a accesa si manipula dtele de la acea adresa
    */
    unsigned int volatile * const port = (unsigned int *) PORT;

    /*Se poate face read sau write pe port prin dereferentierea pointerului port.*/

    /*Nu este o idee buna sa accesam o memorie volatila cu o variabila non-volatila. O astfel de utilizare => undefined behavoir*/

    return 0;
}

