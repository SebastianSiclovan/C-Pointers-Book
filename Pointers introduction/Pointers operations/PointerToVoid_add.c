#include <stdio.h>




int main()
{
    int value = 10;

    void *ptr_toVoid = &value;
    printf("%d\n", ptr_toVoid);


    ptr_toVoid = ptr_toVoid + 1; // increments adress with 4 bytes which is hold by this pointer 
    printf("%d\n", ptr_toVoid);
    
    return 0;
}