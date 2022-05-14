//  Síntese
//  Objetivo: Os jogadores escolhem de uma "mão" números entre (0 - 4), e determinar quem venceu a partida, se foi dario ou xerxes.
//  Entrada : Existe um numero de rodadas e dois inteiros dario e xerxes, representando a jogada de dario e xerxeserxerxeses, respectivamente.
//  Saída   : Nome do jogador que venceu a partida.

#include <stdio.h>

#include <stdio.h>

int main(void) {
    
    int dario, xerxes, numeroRodadas, i, countadorDario,countadorXerxes;
    
    countadorDario = 0;
	countadorXerxes = 0;
   
//  printf(" Bem vindo ao jogo de Dario e Xerxes, \n digite o numero de rodadas: ");
    scanf("%i", &numeroRodadas);
    
    for(i = 1; i <= numeroRodadas; i++) {
        scanf("%i %i",&dario,&xerxes);
        if(((dario-xerxes >= -2) && (dario-xerxes <= -1)) || (dario-xerxes > 2))
            countadorDario += 1;
        else
            countadorXerxes += 1;
    }
    if(countadorDario > countadorXerxes)
        printf("dario");
    else
        printf("xerxes");
        
    return 0;
}
