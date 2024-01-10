#include <stdio.h>
#include <stdlib.h>

/*
-Array urile bidirectionale utilizeaza rows and collums.

-Aseazarea in memorie:

m_array[0][0] 0x100 adress => value: 1
m_array[0][1] 0x104 adress => value: 2
m_array[0][2] 0x108 adress => value: 3
m_array[1][0] 0x112 adress => value: 4
m_array[1][1] 0x116 adress => value: 5
m_array[1][2] 0x120 adress => value: 6
*/



int main()
{
    /*Array with 2 rows and 3 collums*/
    int m_array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    
    return 0;
}

