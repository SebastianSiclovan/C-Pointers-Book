#include <stdio.h>
#include <stdlib.h>


/*
-De regula dupa ce memoria a fost dezalocata trebuie sa ii atribuim NULL ca adresa acelui pointer pentru a evita undefined behavoir
-Daca un pointer pointeaza catre o zona de memorie care a fost deja dezalocata => se numeste "darling pointer"
-La apelarea functie malloc() se intampla urmatoarele: alocarea de memorie, return void pointer catre primul adresa de inceput (first byte)

*/




int main()
{

    int * ptr = (int*)malloc(sizeof(int));

    *ptr = 100;

    printf("%d\n", *ptr);

    free(ptr);

    printf("%d\n", *ptr);

    ptr = NULL;

    printf("%d\n", ptr);



    return 0;
}