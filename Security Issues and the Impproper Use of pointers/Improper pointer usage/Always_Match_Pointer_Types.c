#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-In aceasta situatie va trebui sa folosim aceleasi tip de pointer cand facem asignari sau conversii de tip intre pointeri.
*/

int main()
{
    /*Example 1: asignare incorecta la pointer*/
    double a = 13.4;
    double * m_ptr_ex1 = &a;

    /*ASSIGN int la double => error*/
    int * invalidPtr = m_ptr_ex1;
    /*End of example 1*/

    


    return 0;
}

