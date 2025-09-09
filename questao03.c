/* 3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
atribuição produzem erro de compilação? Justifique. 
    p = &i;
    *q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q

*/


#include <stdio.h>

int main(){
    int i = 5, j = 10;
    int *p, *q;
  

    // Valido pois P aponta e guarda o endereço de i
    p = &i;
    printf("%d\n", *p);
    
    // Invalido pois o operador * tenta acessar um valor no endereço de memoria em que q ja foi armazenado 
    // mas q não aponta para nenhum endereço de memoria valido

    //*q = &j; 
    //printf("*q = %p\n", *q);
    //printf("%d\n", *q);

    // para consertar esse acima seria. 

    q = &j;
    printf("*q = %p\n", *q);
    printf("%d\n", *q);

    // Valido, pois começando de taz pra frente o primeiro & armazena o endereço de i, logo em seguida o * aponta para o valor do endereço de i, 
    // e em seguida o & armazena o endereço de i que foi apontado pelo *
    p = &*&i; 
    printf("%d\n", *p);

    // Invalido, pois o operador * tenta acessar um valor no endereço de memoria em que &j ja foi armazenado 
    // e &j não é um endereço de memoria valido e i tenta acessar esse valor que não foi apontado por nenhum endereço de memoria valido.
    // * e & ou precisa armazenar ou precisa apontar para um endereço de alguma variável.

    //i = (*&)j;
    //printf("%d\n", i);

    // para consertar esse acima seria.
    i = *&j;
    printf("%d\n", i);

    // valido, pois o operador * aponta para o valor de j que foi armazenado pelo & e atribui esse valor a i
    i = *&j;
    printf("%d\n", i);

    // valido, começando de traz pra frente, primeiro o &j armazena o endereço de memoria da variavel j, depois o * aponta para o valor do endereço de j
    // e depois o & armazena o endereço que foi apontado pelo * e por fim o * aponta para o valor do endereço que foi armazenado pelo & que foi apontado pelo * 
    // e que foi armazenado pelo &j e tudo isso é atribuido a i
    i = *&*&j;
    printf("%d\n", i);
    
    // invalido, pois q aponta para um endereço de memoria que não foi inicializado, 
    // logo o operador * tenta acessar um valor em um endereço de memoria invalido
    //q = *p;
    //printf("%d\n", q);



    // valido, pois o operador *p aponta para o valor de i que é 5 e depois incrementa esse valor para 6
    // e o operador *q aponta para o valor de j que é 10, e faz a soma de 6 + 10 e atribui esse valor a i
    i = (*p)++ + *q;
    printf("Valor aqui:%d\n", i);
   
    
    return 0;
}