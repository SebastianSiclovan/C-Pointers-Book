#include <stdio.h>
#include <stdlib.h>


/*EX 1: This function return a pointer to an int*/
int* function_1();

/*EX 2: This is a function pointer which takes two ints and return an int*/
int (*fPtr_function2)(int, int);

/*EX 3: This is a function pointer which take 2 ints and return a pointer to an int*/
int* (*fPtr_function3)(int *);

int * function_1()
{
    static int value = 10;

    return &value;
}

int function_2(int a, int b)
{
    int sum = a + b;

    return sum;
}

int * function_3(int *a)
{

    *a = 10;

    return a;

    

}


int main()
{
    /*Example 1*/
    int * ptr_ex1 = function_1();

    printf("EX 1: Function which return a pointer to an int: %d\n", *ptr_ex1);
    /*End of example 1*/

    /*Example 2*/
    int (*fPtr_function2)(int,int) = function_2(1, 1);
    printf("EX 1: Function pointer which takes 2 ints an returns an int: %d\n", *fPtr_function2);
    /*End of example 2*/

    /*Example 3*/
    int value = 3;
    int * fPtr_function3 = function_3(&value);
    printf("EX 1: Function pointer wich returns a pointer to an int: %d\n", *fPtr_function3);
    /*End of example 3*/
    

    return 0;
}

