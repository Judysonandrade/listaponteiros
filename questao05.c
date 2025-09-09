 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

 void funcao(char** str){ // função tem como parametro um ponteiro para ponteiro de char na variavel str
    // a variavel str que esta apontando para o endereço do ponteiro str incrementa 1 posição
    str++; // so da movento o ponteiro para frente, mas não altera o valor do ponteiro str na main
    // A função função não altera o valor do ponteiro str na função main, pois a função recebe uma cópia do endereço do ponteiro str
    // e o incremento de str++ altera apenas essa cópia local, não afetando o ponteiro original na main.
    // para alterar o valor do ponteiro str na main, seria necessário usar *str++ ou similar para modificar o conteúdo apontado pelo ponteiro.

    //(*str)++; 
    //printf("%s\n", *str); // imprime a string armazenada no endereço de memoria apontado por str
}

 int main(){
    char *str = (void *)malloc(50*sizeof(char)); // essa linha faz uma alocação de memoria para 50 caracteres do tipo char
    strcpy(str, "Agostinho"); // copia a string "Agostinho" para o endereço de memoria apontado por str
    funcao(&str); // passa o endereço do ponteiro str para a função funcao
    puts(str); // imprime a string armazenada no endereço de memoria apontado por str
    free(str); // libera a memoria alocada para str para não acontecer um memory leak
    

    return 0;
}