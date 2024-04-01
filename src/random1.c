#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	int numSorteado = rand () % 101;

	printf("Loteria");
	printf("\n Escolha um número entre 0 e 100: ");
	int numEscolhido;
	fflush(stdout);
	scanf("%d", &numEscolhido);

	if(numEscolhido == numSorteado){
		printf("\n Você Ganhou!");
	} else{
		printf("Você perdeu! o número escolhido foi: %d", numSorteado);
	}
	return EXIT_SUCCESS;
}
