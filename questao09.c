#include <stdio.h>

int main(){
    int mat[4] = {20, 50, 2, 98}, *p, x;

    printf("p = mat: %d\n", p = mat); // p recebe o endereço do primeiro elemento do array mat
    printf("p = mat + 1: %d\n", p = mat + 1); // p = mat que referente ao endereço do primeiro elemento da array que é 6422284 e incrementa mais 1 que é em 4 bytes, ou seja, 
    // o endereço do segundo elemento do array que é 6422288

    //printf("p = %d", p = mat++); // erro, pois o array não pode ser incremetado, o que pode ser incremetado é o ponteiro
    //printf("p = %d", p = ++mat); // erro,  pois o array não pode ser incremetado, o que pode ser incremetado é o ponteiro
    printf("X = %d" ,x = (*mat));   // valido, pois *mat vai acessar o valor que esta alocado na memoria do primeiro elemento da array 
    // e vai printar na tela
    // 
    return 0;

}