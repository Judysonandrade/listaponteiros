/******************************************************************************
O que é memory leak? Crie um exemplo de programa em C que contenha 
um memory leak e proponha uma correção para o mesmo.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*  Memory leak trata-se de um vazamento de memoria 
    logo onde há um duplicamento de memoria, ou seja, é quando
    quando um programa aloca memória, mas não a libera quando ela não é mais necessária,
    fazendo com que a memória não possa ser reutilizada pelo sistema
    */
    
    
    int *p; // declaração de um int para inteiro
    
    p = malloc(sizeof(int) * 5); // faz uma alocação de memoria de 5 inteiros 
    // ou seja durante a execução desse programa 
    
    for(int i=0;i<5;i++){
        p[i] = (i+2) * 10;
        
    } // atribui valores para P
    
    for(int i=0;i<5;i++){
        printf("%d ", p[i]);
        
    } // print de P
    // irá da erro, caso eu compile esse codigo outra vez ele vai ta com o 
    // algo armazenado na sua memoria e quando for armazenar novos dados
    // vai dar problema, para isso ser arrumado é so colocar um free(p)
    
    // free(p);
    return 0;
}