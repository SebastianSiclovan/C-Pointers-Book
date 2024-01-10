#include <stdio.h>

/*
In cazul pointerilor la pointeri (multiple level indirection) avem o flexibilitate mai mare in ceea ce priveste codul, in sensul ca daca actualizam
un titlu si vrem ca pointer ul la pointer ul de titluri sa aiba acelasi titlu actualizat, atunci trebuie sa modificam doar array ul titles si atat

*/
int main()
{

    /*Array with addreses of titles*/
    char *titles[] = {"A Tale of Two Cities",
                    "Wuthering Heights",
                    "Don Quixote",
                    "Odyssey",
                    "Moby-Dick",
                    "Hamlet",
                    "Gulliver's Travels"};
    
    char **bestBooks[1]; // can store one title of a best book
    char **englishBooks[2]; // can store 2 titles of an english books

    bestBooks[0] = &titles[4]; 

    printf("%s\n", *bestBooks[0]); //dereferentiere pointer la pointerul care retine adresa 4 din array (moby dick)

    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[6];

    printf("%s\n", *englishBooks[0]); //dereferentiere pointer la pointerul care retine adresa 0 din array (A tale of ...)
    printf("%s\n", *englishBooks[1]); //dereferentiere pointer la pointerul care retine adresa 6 din array (Gulliver's Traveles)

    return 0;
}