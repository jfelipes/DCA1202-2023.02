#include <stdio.h>

int main(void)
{
    int i = 3, j = 5;     // Declaração de variáveis inteiras.
    int *p = &i, *q = &j; // Declaração de ponteiros para inteiro, com referência (apontam) para às variáveis i e j.

    printf("&i=%p,&j=%p\n", &i, &j); // Conferência dos endereços de i e j.
    printf("*p=%p,*q=%p\n", p, q);   // Conferência dos endereços que foram atribuídos aos ponteiros p e q. (devem ser os mesmos valores obtidos na linha 10)

    printf("p == &i => %d\n", (p == &i));                   // Saída:  1
    printf("*p - *q => %d\n", (*p - *q));                   // Saída: -2
    printf("**&p => %d\n", **&p);                           // Saída:  3
    printf("3 - *p/(*q) + 7 => %d\n", (3 - *p / (*q) + 7)); // Saída: 10
    return 0;
}