#include <stdio.h>
#include <stdlib.h>

/*
Memory leaks:
-Este atunci cand tot cerem memorie la OS prin malloc() si nu o dezalocam, acea memorie nu poate fi recuperata si utilizata ulterior.
-Cantitatea de memorie disponibila in heap este limitata, trebuie avut grija cu acest lucru.
-Memory leaks presupune si "lossing adress", acest lucru se intampla in cazul in care alocam memorie si dupa alocam iar memorie fara sa fi dezalocat prima data.
*/


int main()
{
    /*Example 1: never invoked free function*/
    /*Intr un while(1) tot cerem o alocare de memorie, fara sa o dezalocam*/
    char *chunk;
    while (1) {
    chunk = (char*) malloc(1000000);
    printf("Allocating\n");
    }
    /*end of example 1*/

    /*Example 2: lossing adress*/
    int * m_ptr = (int*) malloc(sizeof(int));
    *m_ptr = 100;
    printf("%d\n", *m_ptr);

    m_ptr = (int*) malloc(sizeof(int));
    printf("%d\n", *m_ptr);
    /*End of example 2*/
  
    /*Example 3: lossing address*/
    /*In momentul de fata prin iteratia name++ se pierde prima adresa de inceput unde a fost alocata memoria si nu o putem dezaloca. A good practice e
    sa luam un alt pointer care sa retina adresa de inceput astfel incat sa o putem dezaloca ulterior.
    */
    char *name = (char*)malloc(strlen("Susan")+1); // +1 este pentru acel caracter '\0'

    /*Hold begin address in order to use free function for dezalocation*/
    char *originalAddress = &name;
    strcpy(name,"Susan");
    while(*name != 0) 
    {
        printf("; %c and his address -> %p",*name, (void*)name);
        name++;
    }
    free(originalAddress);
    /*End of example 3*/




    return 0;
}