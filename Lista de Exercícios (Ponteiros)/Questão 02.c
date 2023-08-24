#include <stdio.h>

int main(void)
{
    int i = 5, *p; // Declaração de variável i e ponteiro p.
    p = &i;        // Apontando ponteiro p para endereço de i.

    printf("&i=%p\n", &i); // Conferência dos endereços de i.
    printf("*p=%p\n", p);  // Conferência dos endereços que foram atribuídos aos ponteiros p. (devem ser os mesmos valores obtidos na linha 08)

    printf("%x %d %d %d %d", p, *p + 2, **&p, 3 * *p, **&p + 4); // Saída: 4094 7 5 15 9
    return 0;
}