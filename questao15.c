#include <stdio.h>

int main(){
    unsigned int x[4][3] =  {{1, 2, 3}, {4, 5, 6},
                            {7, 8, 9}, {10, 11, 12}};
                        


    // O printf abaixo vai imprimir endereços de memória, não valores da matriz
    // x+3      → endereço da 4ª linha (&x[3])
    // *(x+3)   → endereço do primeiro elemento da 4ª linha (&x[3][0])
    // *(x+2)+3 → endereço do 4º elemento da 3ª linha, que na prática é &x[3][0]


    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);


    return 0;
}