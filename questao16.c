#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
 
    aloha[2] = value; // correto pois ta atribuição de float a um elemento da array
    scanf("%f", &aloha); // errada, precisa passa elemento a aloha ou um ponteiro para float
    aloha = "value"; // errado attibuito como string
    printf("%f", aloha); // errado pois é uma array recomendavel usar ponteiro
    coisas[4][4] = aloha[3]; // correto atribuito aloha[3] a uma posição da matriz
    coisas[5] = aloha; // errado, Não é possível atribuir um array inteiro a outro diretamente;
    pf = value; // falta o & de ponteiro
    pf = aloha; // Outra forma de fazer pf apontar para o início do array

}