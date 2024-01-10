#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Aceasta functie va aloca memorie si va face clear (continutul va fi setat la binary 0)
-In cazul in care memoria nu va fi alocata atunci functia va returna NULL
-De regula ca parametrii se trimite numarul de octeti ca o combinatie dintre un nr si data type, cum ar fi calloc(5, sizeof(int))
-Se poate folosi malloc() impreuna cu memset() pentru a face ceea ce face calloc()
    memset(destinatie, valoare setata, nr byes care vrem sa i setam);

-Este bine pe cat se poate sa utilizam calloc() cand trebuie sa setam la zero acele adrese, chiar daca executia este mai lenta decat malloc


*/

int main()
{
    /*Example 1: memory allocation & set content to zero with calloc*/
    /*
    int * m_dynamicArrray = (int*)calloc(5, sizeof(int));

    for (size_t i = 0; i < 7; ++i)
    {
        printf("%d\n", *(m_dynamicArrray + i));
    }
    */
    /*End of example 1*/

    /*Example 2: using malloc & memset instead of calloc, it has the same result*/
    int * new_array = (int*)malloc(sizeof(int));
    memset(new_array, 0, 5 * sizeof(int));

    for (size_t  i = 0; i < 5; i++)
    {
        printf("%d\n", *(new_array + i));
    }



    /*End of example 2*/
    


    return 0;
}