#include <stdio.h>
#include <stdlib.h>






int main()
{
    char *pc = (char*) malloc(6); // alocare 6 octeti
    /*Scriere 8 octeti intr o zona de memorie alocata pentru doar 6 => ultimii 2 octeti vor fi corupti ca si memorie*/
    for(int i=0; i<8; i++) {
        pc[i] = 0;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", pc[i]);
    }


    



    return 0;
}