#include <stdio.h>
#include <stdlib.h>


/*
Stack frame:
1.Return address
2.Storage for local variables
3.Storage for parameters
4.Stack nd base pointers: 

-Cand o functie isi incheie executia, stack frame asociat la apel acelei functii este eliminat de pe stiva, toate acele info ale functiei.
*/

/*
*/
void functieA(int param1, int param2) {
    int variabilaLocala = param1 + param2;
    // ...
    // Codul funcției A
}

int main() {
    // ...
    functieA(3, 5);
    // ...
    // Restul programului
    return 0;
}
