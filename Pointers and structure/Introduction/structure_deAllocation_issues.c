#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;

}Person;

/*Init membrii structura => alocare pe HEAP*/
void initializePerson(Person *person, const char* fn,const char* ln, const char* title, unsigned int age) 
{

    person->firstName = (char*) malloc(strlen(fn) + 1);
    strcpy(person->firstName, fn);
    person->lastName = (char*) malloc(strlen(ln) + 1);
    strcpy(person->lastName, ln);
    person->title = (char*) malloc(strlen(title) + 1);
    strcpy(person->title, title);
    person->age = age;

}

void deallocatePerson(Person* person) 
{
    free(person->firstName);
    free(person->lastName);
    free(person->title);
}

void processPerson() 
{
    Person person;
    initializePerson(&person, "Peter", "Underwood", "Manager", 36);
    
    printf("%s\n", person.firstName);
    printf("%s\n", person.lastName);
    printf("%s\n", person.title);
    printf("%u\n", person.age);

    deallocatePerson(&person);

    /*O varianta mai buna ar fi sa folosim un pointer obiect dupa care sa face dealloc*/
    /*Person *personPtr ...... */


}


int main()
{
    processPerson();





    return 0;
}

