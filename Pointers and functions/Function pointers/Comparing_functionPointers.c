#include <stdio.h>
#include <stdlib.h>

typedef void (*fPtr_toOperation)(void);


void first_print(void)
{
    printf("First\n");
}

void second_print(void)
{
    printf("Second\n");
}

fPtr_toOperation m_function(int option)
{
    switch(option)
    {
        case 1:
            return first_print;
        case 2:
            return second_print;
        default:
            return NULL;
    }

}

int main()
{
    fPtr_toOperation m_operation = m_function(1);

    /*Compare if fPtr_toOperation points to first_print or second print or any else function*/

    if (m_operation == first_print)
    {
        printf("That s it! This pointer points to first print!");
    }
    else if (m_operation == second_print)
    {
        printf("That s it! This pointer points to second print!");
    }
    else
    {
        printf("This pointer points to NULL or another adress of function");
    }

    

    return 0;
}


