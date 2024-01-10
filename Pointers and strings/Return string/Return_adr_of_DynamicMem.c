#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-In acest exemplu se face return o adresa de pe HEAP, in momentul in care nu mai folosim char ul respectiv va trebui sa ii face free pentru a nu avea mem leaks.
*/

char * string_fill_letter(const int number_of_letter, const char * m_letter)
{
    char * spaces = (char*) malloc(number_of_letter + 1);

    if(spaces == NULL)
    {
        printf("Memory allocation doesn t work for spaces string!");
        return NULL;
    }

    for (size_t index = 0; index < number_of_letter; ++index)
    {
        spaces[index] = *m_letter;
    }
    spaces[number_of_letter] = '\0';

    return spaces;
}

int main()
{
    char main_letter = 'S';

    char * main_string = string_fill_letter(1, &main_letter);

    printf("%s\n", main_string);

    free(main_string);

    printf("%s\n", main_string);

    


    return 0;
}