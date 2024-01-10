#include <stdio.h>
#include <stdlib.h>

#define size 5

void allocate_mem_forEachElement()
{
    /*Array de pointeri*/
    int * arr[size];

    for (size_t i = 0; i < size; i++)
    {
        /*Alocare spatiu pentru fiecare element (fiecare pointer din array)*/
        arr[i] =(int*)malloc(sizeof(int));

        *arr[i] = i;
    }

 

}
 
int main()
{

    allocate_mem_forEachElement();


    return 0;
}

