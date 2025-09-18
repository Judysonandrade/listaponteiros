#include <stdio.h>
#include <stdlib.h>

// Um ponteiro para função trata-se de uma variável que armazena o endereço de uma função
// na memoria, em vez de armazenar um valor como um inteiro ou um float.
// Isso permite que você passe funções como argumentos para outras funções,
// retorne funções de outras funções, e crie tabelas de funções para facilitar a seleção
// dinâmica de comportamento em tempo de execução.


int operacoes(int a, int b){ // funão que faz operações dependendo dos valores de a e b
    if(a>b){ // se a maior que b some
        return a+b;
    } else if(a==b){ // se a igual b multiplica
        return a*b;
    } else { // se b maior que a subtrai
        return a-b;
    }
}


int main(){
    int a, b, resultado; // declaração de variaveis a, b e resultado
    int (*p)(int, int); // declaração de um ponteiro para função que recebe dois inteiros e retorna um inteiro
    printf("Digite dois numeros: \n "); // prompt para o usuario
    scanf("%d %d", &a, &b);

    p = &operacoes; // atribuição do endereço de memória da função operacoes ao ponteiro p
    // p acessa a função operacoes e pega o endereço dela na memoria; 
    resultado = p(a,b); // resultado recebe p que foi atribuido a função operacoes com os valores de a e b, em que resultado acessa a função operacoes em que a e b são passados como argumentos
    // resultado acessa o endereço da função operacoes e executa a função com os argumentos a e b

    printf("Resultado: %d", resultado); // print do resultado
    return 0;
}