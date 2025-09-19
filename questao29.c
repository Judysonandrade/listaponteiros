
#include <stdio.h>
#include <stdint.h> 

void send(uint64_t estado){ // função que envia o estado da matriz em que essa função simula o envio dos dados
    // Imprime o estado em binário para verificação
    // Percorre cada bit do estado de 64 bits
    // e imprime 0 ou 1 dependendo do valor do bit
    for(int i=0;i<64;i++){
        printf("%d", (int)((estado>>i) & 1));
    }
    printf("\n");
}

int main() {
    unsigned char m[8][8];

    // Preenche a matriz com padrão xadrez: 0 e 1 alternados
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            m[i][j] = (i + j) % 2;
        }
    }
    
     uint64_t estado = 0;  // Variável de 64 bits para guardar o estado da matriz

    // Para cada linha da matriz
    for (int i = 0; i < 8; i++) { // loop que percorre as 8 linhas da matriz e pega os 8 bits de cada linha
        uint8_t linha = 0; // Armazena os 8 bits de uma linha

        // Constrói o byte da linha
        for (int j = 0; j < 8; j++) {
            linha = (linha << 1) | (m[i][j] & 1);
            // Desloca os bits da linha para a esquerda e insere o próximo bit da matriz
        }

        // Desloca o estado 8 bits à esquerda para abrir espaço para a nova linha
        estado = (estado << 8) | linha;
        // Insere a linha no final do número de 64 bits
    }

    // Envia a variável com os bits organizados
    send(estado);

 
    return 0;
}