#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*Variant 1 without typedef for a struct*/
struct _person
{
    char* first_name;
    char* last_name;
    char* nationality;

    unsigned int age;
};


/*Variant 2 with typedef for a struct*/
typedef struct
{
    char* first_name;
    char* last_name;
    char* nationality;

    unsigned int age;

} Person;


int main()
{
    /*Without memory allocation*/
    Person m_person;

    
    /*With memory allocation*/
    Person * person_memAlloc = (Person*) malloc(sizeof(Person));
    free(person_memAlloc);

    Person * personPtr;

    /*Acces & modify members of Person structure with points to sign ( -> )*/
    /*
    personPtr = (Person*) malloc(sizeof(Person));

    personPtr->first_name = (char*) malloc(strlen("Sebastian") + 1);
    strcpy(personPtr->first_name, "Sebastian");

    personPtr->age = 24;
    */



    /*Se poate accesa si modifica membrii si fara ->, putem dereferentia pointer ul si accesa prin .*/
    personPtr = (Person*) malloc(sizeof(Person));

    (*personPtr).first_name = (char*) malloc(strlen("Sebastian") + 1);
    strcpy(*(personPtr)->first_name, "Sebastian");
    personPtr->age = 24;


    return 0;
}

