#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;     //endereço onde esta guardado a variavel i
    q = &j;     //endereço onde esta guardado a variavel j
    p == &i;    //comparacao do ponteiro p com o endereco da variavel j, imprimindo 0
    *p - *q;    //operacao de subtracao de valores *p - *q (3-5) = -2
    **&p;       //valor de i
    printf("%d", 3 - *p / (*q) + 7);

    return 0;
}
