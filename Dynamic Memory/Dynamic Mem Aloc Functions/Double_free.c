#include <stdio.h>
#include <stdlib.h>

/*
-Double free este atunci cand se incearca un free la ptr de 2x.
*/
int main()
{
    int * m_address = (int*)malloc(sizeof(int));

    free(m_address);
    printf("%d\n", *(m_address));

    free(m_address);
    printf("%d\n", *(m_address));



    return 0;
}