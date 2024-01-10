#include <stdio.h>
#include <stdlib.h>


/*
-Malloc aloca numarul de octeti prin singurul sau argument, de regula sa se utilizez sizeof pentru a avea numarul de octeti trms ca param functiei.
*/

int main()
{
    /*Example 1: allocare 10 doubles (80 octeti.)*/
    const int number_of_doubles = 10;
    double * ptr = (double*)malloc(number_of_doubles * sizeof(double));
    


    return 0;
}