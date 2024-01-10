#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct
{
    char * name;
    unsigned int age;

} People;

typedef struct node_
{
    void * data;
    struct node_ * next;

} Node;

typedef struct
{
    Node * head;
    Node * tail;
    Node * currentNode;

} Linked_list;

/*init la lista cu toate la NULL*/
void init_m_list(Linked_list * list)
{
    list->currentNode = NULL;
    list->head = NULL;
    list->tail = NULL;
}

void addHead(Linked_list * list, void * data)
{
    /*Alocare dinamica pentru noul node*/
    Node * m_node = (Node*) malloc(sizeof(Node));

    /*Adaugare payload (datele utile) care vor fi stocate in noul node*/
    m_node->data = data;

    /*Un check la lista mea daca este goala sau nu.*/
    if (list->head == NULL)
    {
        /*Case empty list, lista nu contine nici macar un node*/

        /*Coada va fi noul node*/
        list->tail = m_node;
        /*Next ul nodului este setat la NULL.*/
        m_node->next = NULL;
    }
    else
    {
        /*List isn t empty*/
        /*Adaugare noul node la inceput de lista*/
        m_node->next = list->head;
    }

    /*Adaugare noul node in capul listei, la inceput*/
    list->head = m_node;
}

void addTail(Linked_list * list, void * data)
{
    /*Alocarea dinamica pentru noul node*/
    Node * m_node = (Node*) malloc(sizeof(Node));

    /*Paylooad for new node (useful data)*/
    m_node->data = data;
    /*Next ul noului node va pointa catre NULL deoarece este ultimul, adica la coada.*/
    m_node->next = NULL;

    /*Check daca lista e goala*/
    if (list->head == NULL)
    {
        /*List is empty*/

        /*Capul listei va fi noul node*/
        list->head = m_node;
    }
    else
    {
        /*next ul cozii va fi noul node*/
        list->tail->next = m_node;
    }

    /*Adaugare noul node la sfarsit de lista*/
    list->tail = m_node;
}

void display_person(void * data)
{
    People * person = (People*)data;

    printf("%s <-> %u\n", person->name, person->age);
}
void display_likedList(Linked_list * list, void (*display)(void*) )
{
    /*Creare nod currect care va fi pus la inceputul listei, indexul 0 cum ar veni*/
    Node * currectNode = list->head;

    /*Se executa cat timp nodul curent (capul listei) nu a ajuns la final.*/
    while(currectNode != NULL)
    {
        /*Display continut node prin acest pointer la functia display_person*/
        display(currectNode->data);

        /*Actualizare node currect catre urmatorul nod, ca si un i++*/
        currectNode = currectNode->next;
    }
    
}

void display_head(Linked_list * list, void (*display)(void*) )
{
    if (list->head == NULL)
    {
        printf("This single linked-list is empty!\n");
    }
    else
    {
        display(list->head->data);
    }

}

void display_tail(Linked_list * list, void (*display)(void*) )
{
    if (list->tail == NULL)
    {
        printf("This single linked-list is empty!\n");
    }
    else
    {
        display(list->tail->data);
    }

    
}

void delete(Linked_list *list, Node *node) {
    // Verificăm dacă nodul pe care vrem să-l ștergem este capul listei
    if (node == list->head) {
        // Dacă este singurul nod din listă, actualizăm și coada
        if (list->head->next == NULL) {
            list->head = list->tail = NULL;
        } else {
            // Altfel, actualizăm doar capul listei
            list->head = list->head->next;
        }
    } else {
        // Dacă nodul nu este capul listei, îl căutăm și îl ștergem
        Node *tmp = list->head;
        while (tmp != NULL && tmp->next != node) {
            tmp = tmp->next;
        }

        // Dacă am găsit nodul, actualizăm legătura de next pentru a sări peste nodul pe care vrem să-l ștergem
        if (tmp != NULL) {
            tmp->next = node->next;
        }
    }

    // Eliberăm memoria asociată nodului pe care l-am șters
    free(node);
}




int main()
{

    People * person_1 = (People*) malloc(sizeof(People));
    person_1->name = (char*) malloc(strlen("sebastian") + 1);
    strcpy(person_1->name, "sebastian");
    person_1->age = 24;

    People * person_2 = (People*) malloc(sizeof(People));
    person_2->name = (char*) malloc(strlen("Raluca") + 1);
    strcpy(person_2->name, "Raluca");
    person_2->age = 20;

    People * person_3 = (People*) malloc(sizeof(People));
    person_3->name = (char*) malloc(strlen("Andrei") + 1);
    strcpy(person_3->name, "Andrei");
    person_3->age = 24;

    Linked_list list;

    init_m_list(&list);

    addHead(&list, person_1);
    addHead(&list, person_2);
    addHead(&list, person_3);

    //display_likedList(&list, display_person);

    //display_head(&list, display_person);

    display_likedList(&list, display_person);

    Node * m_node = list.tail;

    delete(&list, m_node);
    printf("\n");
    display_likedList(&list, display_person);




    




    return 0;
}

