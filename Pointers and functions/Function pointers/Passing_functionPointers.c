#include <stdio.h>
#include <stdlib.h>

typedef int (*fptrOperation)(int,int);

int add(int n1, int n2)
{
    return (n1+n2);
}

int substract(int n1, int n2)
{
    return (n1-n2);
}

int compute(int (*fptrOperation)(int,int), int n1, int n2)
{
    return fptrOperation(n1, n2);
}

int main()
{
    int m_result = compute(add, 2, 2);
    printf("%d\n", m_result);

    return 0;
}