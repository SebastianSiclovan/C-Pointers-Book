#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Un exemplu de utilizare incorecta este atunci cand avem un array si dorim sa vedem cate elemente sunt.
*/

int main()
{
    /*Example 1: utilizare incorecta sizeof pentru a vedea cate elem sunt in array*/
    int m_array[] = {1, 2, 3, 4, 5};

    /*Este utilizat gresit pentru a vedea cate elemente sunt in array, este returnat size ul array ului in octeti, avem 4x5 = 20*/
    printf("%d\n", sizeof(m_array));


    /*Aici este utilizat corect pentru a vedea cate elemente avem in array*/
    printf("%d\n", (sizeof(m_array) / sizeof(m_array[0])));
    /*End of example 1*/

    /*Example 2: utilizare incorecta sizeof*/
    int buffer[20];
    int *pbuffer = buffer;
    /*Vrem ca bucla sa se execute de 20 de ori deoarece atatea elem avem in array, dar se executa de 80*/
    /*Acest sizeof(buffer va fi inlocuit cu sizeof(buffer) / sizeof(int)) pentru a rezolva problema*/
    for(int i = 0; i < sizeof(buffer); i++) 
    {
        *(pbuffer++) = 0;
    }

    /*End of example 2*/



    return 0;
}

