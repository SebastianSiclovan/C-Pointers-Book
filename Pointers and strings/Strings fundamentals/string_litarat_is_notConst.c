#include <stdio.h>
#include <stdlib.h>



int main()
{
    /*Example 1: string literal is not constant*/
    char * m_string = "sebastian";

    *m_string = "sebi";

    printf("%s\n", *m_string);
    /*End of example 1*/

    /*Example 2: solution for the above problem*/

    /*Imutable string*/
    const char * m_const_string = "this is a const string, it isn t may changed";
    *m_const_string = "i try..";
    /*End of example 2*/

    return 0;
}

