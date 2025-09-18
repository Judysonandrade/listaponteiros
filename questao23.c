#include <stdio.h>
#include <stdlib.h>

void soma_vetores( int *vet1, int *vet2, int *resultado, int n){
    for(int i=0;i<n;i++){
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main(){
    int n;
    int *vet1, *vet2, *resultado;
    printf("Digite o numero de elementos dos vetores: ");
    scanf("%d", &n);

    vet1 = malloc(sizeof(int) * n);
    vet2 = malloc(sizeof(int) * n);
    resultado = malloc(sizeof(int) * n);

    if(vet1 == NULL || vet2 == NULL || resultado == NULL){
        printf("Erro na alocação de memória\n");
        return 1;
    } // esse if verifica se a alocação foi bem sucedida, como: se vet1, vet2 ou resultado for NULL, significa que a 
    // alocação falhou, como assim falhou, significa que o sistema não conseguiu reservar a quantidade de memória solicitada
    // então o programa imprime uma mensagem de erro e retorna 1 para indicar que houve um erro.

    for(int i=0;i<n;i++){
        printf("Digite o %d elemento do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    } // leitura dos elementos do vetor 1

    for(int i=0;i<n;i++){
        printf("Digite o %d elemento do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    } // leitura dos elementos do vetor 2

    soma_vetores(vet1, vet2, resultado, n); // chamada da função soma_vetores para somar os vetores


    printf("Vetor resultado da soma: \n");
    for(int i=0;i<n;i++){
        printf("%d ", resultado[i]);
    } // print do vetor resultado

    printf("\n");
    free(vet1); // libera a memoria alocada para o vetor 1
    free(vet2); // libera a memoria alocada para o vetor 2
    free(resultado); // libera a memoria alocada para o vetor resultado

    return 0;
}