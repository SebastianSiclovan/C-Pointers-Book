#include <stdio.h>
#include <stdlib.h>


/*
Program stack:
-Este o zona de memorie utilizata in cadrul unui program pentru a gestiona stiva de apeluri (call stack). Stiva de apeluri este o structura
care stocheaza info referitoare la apeluri de functii si reveniri de la functii intr un program.

-Atunci cand o functie este apelata, informatiile cu privire la adresa de revenire, val parametrilor si variabilele locale ale functiei curente
sunt stocate pe stiva. Iar la intoarcerea din functie aceste informatii sunt scoase de pe stiva.

Un program stack este deci o zona de memorie asociata stivei de apeluri unui program care include:
1. Stack frames: fiecare fct apelata are un stack frame asociat ce are info precum asa de revenire, parametrii, var locale etc.
2. Adrese de revenire: adresele la care programul trebuie sa se reintoarca dupa ce functia a fost executata
3. Date temp si var locale: var utilizate temp in cadrul functiilor


*/


void fct_1()
{
    int * var1 = (int*)malloc(sizeof(int));
    int var2;
    
}
void fct_2()
{
    int *var3 = (int*)malloc(sizeof(int));
    fct_1();
}
int main()
{
    int var4;
    fct_2();
    return 0;
}