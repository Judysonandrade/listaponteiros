#include <stdio.h>
#include <stdlib.h>

void crescente(float v[], int n){ 
    float aux;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
}

int main(){
    int n;
    float *v;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    v = malloc(sizeof(float) * n); // alocação dinamica de memoria para o vetor
    // malloc retorna um ponteiro para o inicio do bloco de memoria alocado
    if(v == NULL){ // esse if verifica se a alocação foi bem sucedida
        printf("Erro na alocação de memória\n");
        return 1; // retorna 1 para indicar erro
    }
    for(int i=0;i<n;i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%f", &v[i]);
    } // leitura dos elementos do vetor

    crescente(v, n); // chamada da função crescente para ordenar o vetor


    printf("Vetor em ordem crescente: \n");
    for(int i=0;i<n;i++){
        printf("%.2f ", v[i]);
    } // print do vetor em ordem crescente

    printf("\n");
    free(v); // libera a memoria alocada para o vetor
    return 0;

}