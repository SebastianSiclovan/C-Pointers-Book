#include <stdio.h>


/*
-Dimensiunea unui pointer la un anumit data type este aceleasi, indiferent de tipul de date. Este in functie de OS (16 bit, 32/64 bit).
*/

int main()
{

    float value = 2.5;
    float * ptr_toFloat = &value;

    printf("%d\n", sizeof(ptr_toFloat));

    
    int value_1 = 2.5;
    int * ptr_toInt = &value_1;

    printf("%d\n", sizeof(ptr_toInt));

    
    char value_2 = 'A';
    char * ptr_toChar = &value_2;

    printf("%d\n", sizeof(ptr_toChar));
    return 0;
}