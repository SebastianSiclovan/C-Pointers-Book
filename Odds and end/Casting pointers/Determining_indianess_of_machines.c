#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Little endian:
LS Byte la adresa cea mai mica si MS Byte la adresa cea mai mare.

-Big endian:
MS Byte la adresa cea mai mica, LS Byte la adresa cea mai mare.

*/

int main()
{
    int num = 0x12345678;
    char* pc = (char*) &num;
    for (int i = 0; i < 4; i++)
    {
        printf("%p: %02x \n", pc, (unsigned char) *pc++);
    }


    return 0;
}

