#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){
     float fa = *(const float*) a; 
    // Converte o ponteiro genérico 'a' para ponteiro de float (const float*)
    // Depois desreferencia (*) para pegar o valor real do float que 'a' aponta
    // Agora 'fa' é o valor do primeiro elemento do vetor

    float fb = *(const float*) b; 
    // Mesma coisa para 'b': converte void* em float* e pega o valor
    // 'fb' agora é o valor do segundo elemento do vetor

    return (fa > fb) - (fa < fb); 
    /* Essa linha retorna:
       1  → se fa > fb, ou seja, o primeiro elemento é maior que o segundo
       -1 → se fa < fb, ou seja, o primeiro elemento é menor que o segundo
       0  → se fa == fb, ou seja, os elementos são iguais
       O qsort usa esse retorno para decidir se troca ou não a posição dos elementos
    */
}

int main(){
    int n;
    float *v;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%f", &v[i]);
    } // leitura dos elementos do vetor

    qsort(v,n,sizeof(float),comparar); // chamada da função qsort para ordenar o vetor
    // Em que o primeiriro argumento no qsort é o ponteiro para o início do array (v), em seguida 
    // o numero de elementos que tem esse array, o tamanho de cada elemento (sizeof(float)) e por fim
    // a função de comparação (comparar) que define a ordem dos elementos



    printf("Vetor em ordem crescente: \n");
    for(int i=0;i<n;i++){
        printf("%.2f ", v[i]);
    } // print do vetor ordenado

    printf("\n");
    free(v); // libera a memoria alocada para o vetor

    return 0;
}