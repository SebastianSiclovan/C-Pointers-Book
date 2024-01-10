#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Aliasing ul este atunci cand doi sau mai multi pointeri indica catre aceeasi zona de memorie. La aliasing, modificarile facute prin intermediul
unui pointer poate afecta valorile citite sau modificate prin intermediul celorlalti pointeri ceea ce duce la undefined behavor.

-Restrict keywork ofera informatii compilatorului despre aliasing ul pointerilor. Daca un pointer este marcat cu restrict => zona de memorie
la care face referire acest pointer nu poate fi accesata sau modificata prin intermediul altor pointeri => astfel compilatorul va face
optimizari mai eficiente.

-Functii care utilizeaza restrict in C:
• void *memcpy(void * restrict s1, const void * restrict s2, size_t n);
• char *strcpy(char * restrict s1, const char * restrict s2);
• char *strncpy(char * restrict s1, const char * restrict s2, size_t n);
• int printf(const char * restrict format, ... );
• int sprintf(char * restrict s, const char * restrict format, ... );
• int snprintf(char * restrict s, size_t n, const char * restrict format, ... );
• int scanf(const char * restrict format, ...);

-Restrict este useful pentru compilator sa faca optimizari eficiente, dar si pentru programator care ii va spune ca acesti pointeri nu trebuie
sa fie aliasati.


*/

void updateArray(int * restrict arr, int size, int value) 
{
    for (int i = 0; i < size; ++i) {
        arr[i] = value;
    }
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    updateArray(myArray, 5, 100);

    for (int i = 0; i < 5; ++i) {
        printf("%d ", myArray[i]);  // Va afișa: 100 100 100 100 100
    }

    return 0;
}
