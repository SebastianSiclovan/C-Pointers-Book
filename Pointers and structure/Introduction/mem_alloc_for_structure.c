#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
-De regula size-ul structurii este dat de suma tuturor membriilor, inclusiv de padding ul adaugat de compilator pentru aliniere.
-Size ul exact al structurii se obtine prin sizeof()
*/



#define fill_LastName "Siclovan"
#define fill_FirstName "Sebastian"


typedef struct
{
    char * FullName;
    char * LastName;
    char * FirstName;
    unsigned int age;

} Person;




int main()
{
    Person * m_person = (Person*) malloc(sizeof(Person));

    m_person->LastName = (char*) malloc(strlen(fill_LastName) + 1);

    if (m_person->LastName == NULL)
    {
        printf("Memmory allocation error..\n");
    }

    strcpy(m_person->LastName, fill_LastName);

    printf("Last Name: %s\n", m_person->LastName);

    m_person->FirstName = (char*) malloc(strlen(fill_FirstName) + 1);

    if (m_person->FirstName == NULL)
    {
        printf("Memmory allocation error..\n");
    }

    strcpy(m_person->FirstName, fill_FirstName);

    printf("First Name: %s\n", m_person->FirstName);

    m_person->FullName = (char *) malloc(strlen(fill_LastName) + strlen(fill_FirstName) + strlen(" ") + 1);

    if (m_person->FullName == NULL)
    {
        printf("Memmory allocation error..\n");
    }

    strcpy(m_person->FullName, fill_LastName);
    strcat(m_person->FullName, " ");
    strcat(m_person->FullName, fill_FirstName);

    printf("Full Name: %s\n", m_person->FullName);

    /*Structure size*/
    printf("%d\n", sizeof(Person));


    return 0;
}
