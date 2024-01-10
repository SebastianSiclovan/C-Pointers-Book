#include <stdio.h>
#include <stdlib.h>


void usePointers_toSwap(int *nPtr_1, int * nPtr_2)
{
    int temp;

    temp = *nPtr_1;
    *nPtr_1 = *nPtr_2;
    *nPtr_2 = temp;
}

int main()
{
    int n1 = 0;
    int n2 = 1;

    usePointers_toSwap(&n1, &n2);

    printf("After call function => n1 = %d and n2 = %d", n1, n2);

    return 0;
}