#include <stdio.h>

int main()
{
    /*Example 1: how warks adding an int to a pointer which points to an array*/
    /*Suppose the following thing: 10 => 0x400, 20 => 0x404 => 30 => 0x408, 40 => 0x412 */
    int array[] = {10, 20, 30, 40};

    int *ptr_toArary = array;
    printf("%d\n", *ptr_toArary);

    ptr_toArary = ptr_toArary + 1; // add 1 => ptr move with 4 bytes, more exactly at adress 0x404 = 20
    printf("%d\n", *ptr_toArary); // value 20 from adress 0x404

    ptr_toArary = ptr_toArary + 1; // add 1 => ptr move with 4 bytes, more exactly at adress 0x408 = 30
    printf("%d\n", *ptr_toArary); // value 30 from adress 0x408

    ptr_toArary = ptr_toArary + 1; // add 1 => ptr move with 4 bytes, more exactly at adress 0x412 = 40
    printf("%d\n", *ptr_toArary); // value 40 from adress 0x412


    /*Example 2: */
    /*move ptr to the first addres from this array*/
    ptr_toArary = array;

    
    ptr_toArary += 6; // accesing adress after end of array => invalid adress

    printf("%d\n", *ptr_toArary);





    return 0;
}