#include <stdio.h>




int main()
{
    int value = 10;
    int *valuePtr = &value;

    printf("%d\n", &valuePtr); // display adress of this pointer in decimal
    printf("%x\n", &valuePtr); // display ... in hexadecimal
    printf("%o\n", &valuePtr); // display ... in octal
    return 0;
}