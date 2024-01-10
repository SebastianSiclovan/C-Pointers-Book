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

    if (m_operation != NULL)
    {
        m_operation();
    }
    else
    {
        printf("This operation doesn t exist!");
    }

    return 0;
}

