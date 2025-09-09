/******************************************************************************

 // & acessa o endereço de memoria em inteiro
 // tipo * aponta em um endereço de memoria 
 // %p mostra o endereço de memória em hexadecimal.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 3;
    int j = 5;
    
    int *p, *q;
    
    p = &i; // p recebe o endereço de i;
    
    q = &j; // q recebe o endereço de j
    
    if(p==&i){
        printf("Verdadeiro\n"); //  será verdadeiro caso o ponteiro p aponte para i, ou seja se armazenam a mesma variavel
    } else {
        printf("Falso\n");
    }
    
    printf("\n");
        
    int subtracao;
    subtracao = *p - *q; // ao usar o *, acessamos os valores armazenados nos endereços apontados por p (i) e q (j), e fazemos a subtração
    // ou seja *p acessa o valor da variavel i  e o *q o valor da variavel j;
    
    printf("%d\n", subtracao);
    
    
    printf("\n");
    
    // **&p: acessa o valor de i. 
    // é a mesma coisa que *(*(&p))
    //Primeiro obtém o endereço de p (&p), depois acessa p (*&p), e por fim acessa o valor apontado por p (**&p)
    
    printf("%d\n",**&p);
    printf("\n");
    
    int equacao;
    
    equacao = 3 - *p/(*q) + 7;
    
    // O valor que espera-se aparecer é 10, pois na divisão *p/(*q) o resultado sera 0
    // pois as variaveis são do tipo inteiro e o resultado da divisão sera do tipo float
    // logo ficando 3 - 0 + 7 = 10
    
    printf("%d", equacao);
    
    
    
}