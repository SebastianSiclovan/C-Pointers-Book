#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef char* (*m_fPtr) (char*);


char * edit_string_1(char * m_str)
{
    return strcat(m_str, "1");
}

char * edit_string_2(char * m_str)
{
    return strcat(m_str, "2");
}



char * get_string(m_fPtr fPtr_arg, char * original_arg)
{
    if (original_arg == NULL)
    {
        printf("This arg is NULL, problem...");

        return NULL;
        
    }


    char * string_from_function = (char*) malloc(strlen(original_arg) +2);

    if (string_from_function == NULL)
    {
        printf("An error has occured, it s about memory allocation!");

        return NULL;
    }

    strcpy(string_from_function, original_arg);
    string_from_function = fPtr_arg(string_from_function);

    return string_from_function;


}
int main()
{

    char *main_str = get_string(edit_string_1, "Get function_");

    if (main_str != NULL)
    {
        printf("%s\n", main_str);

        free(main_str);
    }
    else
    {
        printf("Error occurred, main_str is NULL.\n");
    }

    

    return 0;
}

