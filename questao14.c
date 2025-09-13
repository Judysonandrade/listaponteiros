#include <stdio.h>

int f(int a, int *pb, int ***ppc){ // função com 3 variavel, sendo ela 2 ponteiros para inteiro
    int b, c; // declaração de duas variaveis inteiras
    ***ppc +=1; // ***ppc acessa o conteudo que está no endereço de memoria do ponteiro para ponteiro de um ponteiro inteiro e soma mais 1
    c = **ppc; // c recebe **ppc q é um ponteiro de um ponteiro para inteiro  

    *pb += 2; // *pb acessa o conteudo que no endereço de memoria de pc que é um ponteiro para inteiro e soma mais 2
    b = *pb; // b recebe o conteudo de pb

    a += 3; // a soma mais 3
 
    return a + b + c; // soma dos 3
}

int main(){
    int c, *b, **a; // declaração de 3 variaveis e 2 delas são ponteiros para inteiro 

    c = 5; // C = 5; 

    b = &c; // B guarda o endereço de memoria de C 
    a = &b; // A guarda o endereço de memoria de B

   // como a soma é realizada 
    // ppc = &b // recebe o endereço de memoria de B
    /// *ppc = b // acessa o conteudo de B
    // **ppc = c // acessa o conteudo de C - declarado na função
    // ***ppc = c // ou seja recebe o valor de C com a soma ja feita
    // C = 5 + 1 = 6

    // *PB = C = 5
    // *PB acessa o conteudo de C e soma mais 2
    // em que o novo valor de C que é 6, C = 6 + 2 = 8
    // b recebe o endereço de memoria de C que é igual a PB que é igual a  8
    
    // a recebe o valor de C e soma mais 3 = 5 + 3 = 8 

    // soma  = 22
   

    printf("Resultado da soma = %d\n", f(c,b,a)); // ✅ funcionando

    getchar(); // transformar em um caractere da tabela ASCII

    return 0;
}
