#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-De regula acestea apar atunci cand dorim sa scriem dincolo de sf string ului.
-Utilizarea functiilor strcpy() si strcat poate face o astfel de depasire daca nu sunt utilizate cu atentie.

*/


int main()
{
    /*Example 1:*/
    char firstName [8];
    int result;
    result = strcpy_s(firstName,sizeof(firstName),"Alexander");
    /*End of example 1*/


    return 0;
}

