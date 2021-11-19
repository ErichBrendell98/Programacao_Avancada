#ifndef RESPOSTA_H_INCLUDED
#define RESPOSTA_H_INCLUDED

#endif      //RESPOSTA_H_INCLUDED
#include <stdio.h>

int main(){
    int i = 5, *p;
    p = &i;
    printf("%x %d %d %d %d", p, *p + 2, **&p, 3**p, **&p + 4);
    // 1 - p em hexadecimal
    // 2 - valor de p + 2 (5 + 2 = 7)
    // 3 - valor de i (i = 5) 
    // 4 - valor de 3 x i (3 x 5 = 15)  
    // 5 - valor de i + 4 (5 + 4 = 9)
    return 0;
}
