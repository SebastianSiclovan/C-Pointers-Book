/*
• Creating fast and efficient code
• Providing a convenient means for addressing many types of problems
• Supporting dynamic memory allocation
• Making expressions compact and succinct
• Providing the ability to pass data structures by pointer without incurring a large
overhead
• Protecting data passed as a parameter to a function
*/

/*
Problems using pointers:
• Accessing arrays and other data structures beyond their bounds
• Referencing automatic variables after they have gone out of existence (referire la var locale care au au iesit din scope)
• Referencing heap allocated memory after it has been released (referire la o zona de memorie din heap dupa ce a fost dezalocata)
• Dereferencing a pointer before memory has been allocated to it(dereferentierea unui pointer inainte ca nmemoria sa i fost alocata)
• Dereferentierea unui pointer NULL sau neinitializat duce la undefined behavoir

*/
#include <stdio.h>

int main()
{
    int * num;
    int *ptr;

    printf("%d", *ptr); 


    return 0;
}