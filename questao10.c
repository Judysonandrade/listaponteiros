#include <stdio.h>

int main(){
    int vet [] = {4, 9, 13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ", *(vet+i));

        // Esse laço faz a leitura dos numeros nas posições do vet
        // vet[0] = 4; vet[1] = 9; vet[2] = 13
        // o laço ele percorre pelas posições do vetor e em vet+i ele pega o endereço do primeiro elemento e incrementa
        // em i, em que i é um inteiro de 4 bytes ou seja ao incrementa ele ira ter o endereço do segundo elemento e assim vai para 
        // para o terceiro elemento. E para acessar o valor desse endereços usa-se o *, logo a saida vai ser 4, 9, 13
        // Saida para v[0] = *(61FF10) = 4 
        // saida para v[1] = *(61FF10 + 4) = *(61FF14) = 9
        // saida para v[2] = *(61FF14 + 4) = *(61FF18) = 13
    }

    printf("\n");

    for(i=0; i<3;i++){
        printf("%X\n", vet+i); 
        
        // esse for tem a função de percorrer o endereço de memoria dos elementos do vetor
        // logo vet vai acessar o primeiro endereço do vet e vai encrementar em i que como o tipo
        // é inteiro ele vai de 4 a 4 até i < 3
        // Saida para v[0] = 61FF10 
        // saida para v[1] = 61FF10 + 4 = 61FF14
        // saida para v[2] = 61FF14 + 4 = 61FF18
    }

    return 0;
}