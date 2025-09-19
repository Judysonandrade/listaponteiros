#include <stdio.h>
#define TAM 10

int funcao1(int vetor[], int v){
    int i = 0;
    for(i=0;i<TAM;i++){
        if(vetor[i] == v){
            return i;
        }
    }
    return -1;
}
int funcao2(int vetor[], int v, int i, int f){
    int m = (i + f) / 2;
    if(v==vetor[m]){
        return m;
    }
    if(i>=f){
        return -1;
    }
    if(v>vetor[m]){
        return funcao2(vetor, v, m+1, f);
    } else {
        return funcao2(vetor, v, i, m-1);
    }
}
int main(){
    int vetor[TAM] = {1,3,5,7,9,11,13,15,17,19};
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
    return 0;
}

/* I - 
Qual o resultado do printf, em funcao1 ele vai comparar o indice do vetor com o indice indicado e quando for igual retorna o indice
caso diferente retorna -1, ou seja em funcao1 o resultado é 7

em funcao2 ela pega i que é 0 e f que é TAM-1 que é 9 e faz a média (0+9)/2 = 4,5 mas como 
é inteiro ele pega só o 4, depois compara se v que é 15 é igual ao vetor[4] que é 9, se fosse igual retornava 4, mas como
é diferente ele vai ver se i é maior ou igual a f, se fosse retornava -1, mas como 0 não é maior que 9 ele vai ver se v é maior que vetor[4]
 que é 9, como 15 é maior que 9 ele chama a função de novo, mas agora com i = m + 1 que é 4 + 1 = 5 e f continua 9
então agora a média é (5 + 9)/2 = 7, depois compara se v que é 15 é igual ao vetor[7] que é 15, como é igual retorna 7
 então o resultado do printf é 7 - 7 */

/* II - A função1 faz uma busca linear e a função2 faz uma busca binária
// ou seja, o pior dos casos da funcao1 é percorrer todo o vetor, ou seja, O(n)
// já o pior dos casos da funcao2 é O(log n) pq a cada iteração ela divide o vetor pela metade
// logo a funcao2 é mais eficiente que a funcao1
*/

/* III - A funcao2 é recursiva e não interativa como a funcao1
*/

// RESPOSTA: I, APENAS.


