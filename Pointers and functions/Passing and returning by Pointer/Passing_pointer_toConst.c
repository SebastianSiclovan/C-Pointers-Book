#include <stdio.h>
#include <stdlib.h>

/*
-Se protejeaza acea zona de memorie avand un pointer la o constanta ca si parametru.

*/

void Ptr_toConst(const int * m_ptr)
{

    //*m_ptr = 5; => error, it s a pointer to const and then data cannot be changed

}

int main()
{
    const int size = 10;

    return 0;
}