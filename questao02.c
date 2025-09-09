/******************************************************************************

Mostre o que serC! impresso pelo programa supondo que a variC!vel i ocupa o endereC'o 4094 na
memC3ria e que nessa arquitetura os inteiros possuem 2 bytes de tamanho.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int i = 5 /* endereC'o 4094 */, *p /* Ponteiro */;
	p = &i;

	// ele ira imprimira o endereC'o de memoria armazenado em p, que C) 4094 que
	// C) o endereC'o da variavel i
	printf("%p\n", p);

	// p aponta para o endereC'o 4094, que C) o valor de endereC'o da variavel i
	// p+1 avanC'a 1 posiC'C#o de int, ou seja, 2 bytes que foi dado pela questao, resultando no endereC'o 4096
	//  e a impressC#o sera 4096
	printf("%p\n", p+1);

	// *p acessa o valor da variavel i que C) 5
	// em que p aponta para o endereC'o da variavel i, *p acessa esse conteudo
	// e depois soma 5 + 2 = 7
	printf("%d\n", *p+2);

	// **&p: acessa o valor de i.
	// em que &p pega o endereC'o de p
	// depois, **&p acessa o valor de i
	printf("%d\n", **&p);

	//  *p acessa o valor da variavel i que C) 5
	// em que p aponta para o endereC'o da variavel i, *p acessa esse conteudo
	// e depois multiplica 3*5 = 15
	printf("%d\n",3**p);

    // **&p: acessa o valor de i.
    // em que &p pega o endereço de p
    // depois, *(recupera o valor) e o segundo * acessa o valor de i 
    // e depois faz 5 + 4 = 9
	printf("%d\n", **&p+4);








	return 0;
}
