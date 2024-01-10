#include <stdio.h>
#include <stdlib.h>



void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
    printf("%d\n", *(arr+i));
 }
}

int main()
{
    int m_array[] = {1, 2, 3, 4, 5};

    displayArray(m_array, 5);

    return 0;
}

