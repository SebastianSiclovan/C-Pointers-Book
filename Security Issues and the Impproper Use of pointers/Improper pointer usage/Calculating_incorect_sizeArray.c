#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Atunci cand operam cu matrici este bine sa trimitem si size ul pentru a utiliza dimensiunea corecta a acesteia.

-In exemplul de mai jos am transmis size ul acestui array, insa prin strcpy am pus string de o alta dimensiune, strcpy trebuie utilizata cu atentie

*/



void replace(char buffer[], char replacement, size_t size) {

    for (size_t index = 0; index < size; ++index)
    {
        *(buffer + index) = replacement;
    }
    

}
int main()
{

    char name[8];
    strcpy(name, "Alexander");

    replace(name, '-', sizeof(name));

    printf("%s\n", name);



    return 0;
}

