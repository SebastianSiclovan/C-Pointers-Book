
/*
-Resource Acquisition Is Initialization (RAII) este un concept care se refera la alocarea si dezalocarea resurselor, este o tehnica care garanteaza
acest lucru. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Macrodefiniție RAII
#define RAII_VARIABLE(type, name, initializer, cleanup) \
    type name __attribute__((cleanup(cleanup))) = initializer

void raiiExample() {
    // RAII pentru un pointer la șir de caractere
    RAII_VARIABLE(char*, name, (char*)malloc(32), free);

    // Copiem un șir în zona de memorie alocată
    strcpy(name, "RAII Example");

    // Afișăm rezultatul
    printf("%s\n", name);
}

int main() {
    // Apelul funcției
    raiiExample();

    // Programul continuă...
    return 0;
}
