#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10; // inicializa valor em 10
    p1 = &valor; // p1 que foi declarado como ponteiro para inteiro recebe o endereço de valor 
    *p1 = 20; // *p1 acessa o valor do endereço guardado por p1 e como p1 aponta para valor, o valor de valor é alterado para 20
    printf("%d\n", valor);

    

    /* (b) */
    temp = 26.5; // inicializa temp em 26.5
    p2 = &temp; // p2 foi declarado como float e recebe o endereço de memoria de temp
    *p2 = 29.0; // *p2 acessa o valor do endereço guardado por p2 e como p2 aponta para temp, o valor de temp é alterado para 29.0
    printf("%.1f\n", temp);

    /* (c) */
    p3 = &nome[0]; // p3 que foi declarado como um ponteiro para char receber o endereço do primeiro caractere da array nome que é 'P'
    aux = *p3; // aux que também foi declarado como char recebe e guarda o valor do endereço que foi apontado por p3 que é 'P'
    printf("%c\n", aux); // saida 'P'

    /* (d) */
    p3 = &nome[4]; // p3 agora recebe o endereço de quinta posição do array nome que é 'e'.
    aux = *p3; // aux que também foi declarado como char recebe e guarda o valor do endereço que foi apontado por p3 que é 'P'
    printf("%c\n", aux); // saida 'e'

    /* (e) */
    p3 = nome; // p3 recebe o endereço do primeiro caractere do array nome que é 'P'
    printf("%c\n", *p3); // saida 'P'

    /* (f) */
    p3 = p3 + 4; // p3 recebe o endereço de p3 e incrementa mais 4 posições.
    // p[0] = 'P'
    // p[1] = 'o'   
    // p[2] = 'n'
    // p[3] = 't'
    // p[4] = 'e'
    printf("%c\n", *p3); // saida 'e'

    /* (g) */
    p3--; // agora ele pega p3 que esta apontando para na posição de nome[4] que foi atribuido a p3 e decrementa 1 posição.
    printf("%c\n", *p3); // saida 't'

    /* (h) */
    vetor[0] = 31; // inicializa a primeira posição do array vetor com 31
    vetor[1] = 45; // inicializa a segunda posição do array vetor com 45
    vetor[2] = 27; // inicializa a terceira posição do array vetor com 27
    p4 = vetor; // p4 que foi declarado como um ponto um ponteiro para inteiro recebe o endereço da array vetor, ou seja o endereço da primeira posição do array vetor
    idade = *p4; // idade recebe o endereço que foi apontado por p4
    printf("%d\n", idade); // saida vetor[0] = 31
 
    /* (i) */
    p5 = p4 + 1; // p5 que foi declarado como um ponteiro para inteiro recebe o endereço de p4 que aponta para a primeira posiçõa da array e incrementa mais 1 posição.
    idade = *p5; // idade agora recebe o valor do endereço que foi apontado por p5
    printf("%d\n", idade); // saida vetor[1] = 45

    /* (j) */
    p4 = p5 + 1; // p4 agora recebe o endereço de p5 que aponta para a segunda posição do array vetor e incrementa mais 1 posição.
    idade = *p4; // idade agora recebe o valor do endereço que foi apontado por p4
    printf("%d\n", idade); // saida vetor[2] = 27

    /* (l) */
    p4 = p4 - 2; // p4 agora recebe o proprio p4 que aponta para a terceira posição do array vetor e decrementa 2 posições. 
    idade = *p4; // idade agora recebe o valor do endereço que foi apontado por p4
    printf("%d\n", idade); // saida volta para a primeira posição da array vetor[0] = 31

    /* (m) */
    p5 = &vetor[2] - 1; // p5 que foi declarado como um ponteiro recebe o endereço da terceira posição do array vetor e o & acessa esse endereço
    // e pega o valor do endereço que foi apontado por &vetor[2] e decrementa 1 posição.
    printf("%d\n", *p5); // saida vetor[1] = 45

    /* (n) */
    p5++; // p5 que estava apontando para a segunda posição do array vetor incrementa mais 1 posição 
    printf("%d\n", *p5); // saida vetor[2] = 27

    return 0;
}
