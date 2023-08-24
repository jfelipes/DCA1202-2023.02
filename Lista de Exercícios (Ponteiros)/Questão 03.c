#include <stdio.h>

int main(void)
{
    int i, j, *p, *q; // Declaração de variáveis e ponteiros.

    p = i;           // Atribuição ilegal
    q = &j;          // Atribuição legal
    p = &*&i;        // Atribuição legal
    i = (*&)j;       // Atribuição ilegal
    i = *&j;         // Atribuição legal
    i = *&*&j;       // Atribuição legal
    q = *p;          // Atribuição ilegal
    i = (*p)++ + *q; // Atribuição legal
}