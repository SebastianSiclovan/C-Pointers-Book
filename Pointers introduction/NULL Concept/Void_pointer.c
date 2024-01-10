#include <stdio.h>


/*
-Void pointer este un tip de pointer care poate detine adresa de memorie a oricarui data type
-Un pointer void nu va fi niciodata egal cu un alt pointer Insa daca sunt 2 pointeri void care retin NULL => acestia vor fi egali
-Orice pointer poate fi asignat catre un pointer void si apoi putem face conversie la tipul original al pointerului fara a pierde informatie
-Size ul un void pointer difera in functie de OS (daca e 16-bit sau 32/64-bit) pt 16 e 2 bytes, pt 32/64 e 4 bytes.
*/
int main()
{
    /*Example 1: any pointer to a void pointer and backward conversion*/
    int value = 10;
    void *ptr_toVoid = &value;
    
    /*backward conversion, from void to int*/
    int *ptr_toInt = (int *)ptr_toVoid;

    int original_value = *ptr_toInt;
    printf("%d\n", original_value);
    /*end of example 1*/

    /*Example 2: determining size of a void pointer  */
    size_t size = sizeof(void*); // Legal
    size_t size_1 = sizeof(void); // Illegal
    printf("%d\n", size);



 
    return 0;
}