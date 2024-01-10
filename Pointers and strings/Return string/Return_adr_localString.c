#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-Returnarea unui adrese catre un string local este o mare problema si trebuie evitata, doarece se face return la un string de pe stiva care deja a fost distrus.
-Pentru a evita aceasta problema cel mai bine este sa alocam memorie dinamic pentru acel string pentru a nu mai fi local.
*/


#define MAX_LETTER_LENGTH 32


char * string_fill_letter(const int number_of_letters, char m_letter)
{
    char local_string[MAX_LETTER_LENGTH];

    size_t index; // pentru plusare la ind maxim pentru a putea pune NULL la sf de string

    for (index = 0; index < number_of_letters && index < MAX_LETTER_LENGTH; ++index)
    {
        local_string[index] = m_letter;
    }

    local_string[index] = '\0';

    return local_string;

}
int main()
{

    char * main_string = string_fill_letter(10, 'A');

    printf("%s\n", main_string);


    return 0;
}

