#include <stdio.h>

int main( ){
    int const *x = 3; // uma variavel x declarada como um ponteiro inteiro constante 
    printf("%d", ++(*x)); // o (*x) vai acessar o endereço de memoria e vai acessar o conteudo que está nesse endereço 
    // de memoria e isso ia incrementa em 1 mas como é constante
    // a saida vai ser 3 e o printf não vai funcionar por esse motivo não vai incrementa
    
    return 0;

}