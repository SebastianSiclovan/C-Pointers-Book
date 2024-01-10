#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Example 1: functioneaza corect, nu implica aliasing deoarece nu sunt implicati pointeri*/
typedef union _conversion 
{
    float fNum;
    unsigned int uiNum;

} Conversion;


int isPositive1(float number) 
{

    Conversion conversion = { .fNum =number};
    return (conversion.uiNum & 0x80000000) == 0;

}
/*End of example 1*/


typedef union _conversion2 
{
    float *fNum;
    unsigned int *uiNum;

} Conversion2;

int isPositive2(float number) 
{
    Conversion2 conversion;
    conversion.fNum =&number;

    return (*conversion.uiNum & 0x80000000) == 0;
}




int main()
{
    printf("Example 1: %d\n", isPositive1(-2.0));

    printf("Example 2: %d\n", isPositive2(-2.0));



    return 0;
}

