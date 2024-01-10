#include <stdio.h>

/*
-Un pointer const este acel pointer care nu poate modifica continutul adresei de memorie la care se refera.
-Unui pointer const care face point la alta adresa i se poate schimba adresa de pointare fara sa se primeasca o eroare
-const int *ptr sau int const * ptr sunt the same

Summary:
-int const * ptr / const int *ptr => adresa de pointare se poate modifica, val continuta in aceasta adresa nu poate fi modificata
-int 
*/

int main()
{
    /*Example 1 const ptr*/
    int value = 10;
    int value_2 = 20;

    const int * ptr = &value;
   // *ptr = 20; // => eeror

    ptr = &value_2;
  //  *ptr = 30; // => error
    /*End of example 1*/

    /*Example 2: const ptr*/
    int value_3 = 100;
    int value_4 = 200;
    int * const ptr_1 = &value_3;

    //ptr_1 = &value_4; => cum e int * const ptr, la acesta nu i se va putea modifica adresa de pointare.









    return 0;
}