// 	Síntese
//  Objetivo: Partindo de uma sequência de movimentos e a posição inicial da moeda, determinar a posição final da moeda apás todos os movimentos.
//  Entrada : O limite determina o (número de movimentos), os caractere (A, B ou C) indicam a posição inicial da moeda, e o mov é para onde é o movimento da moeda.
//  Saída   : Onde a moeda se encontra ao final da sequ?ncia de movimentos (A, B ou C).

#include <stdio.h>

int main(void) {
    
    int limite, i, mov;
    char moeda;
    
//	printf(" Bem vindo ao jogo dos Copos, encontre a moeda, digite o numero de rodadas: ");
   
   	scanf("%d", &limite); 
//  printf(" Onde esta a moeda? Informe: ");
	scanf(" %c", &moeda); 
        
		for(i = 1; i <= limite; i++) {
			scanf("%d", &mov);
		if(((moeda == 'A') && (mov == 1)) || ((moeda == 'C') && (mov == 2))){
		   	moeda = 'B';
		}
		else 
		if(((moeda == 'A') && (mov == 3)) || ((moeda == 'B') && (mov == 2))){
		 	moeda = 'C';
		}else
		if(((moeda == 'B') && (mov == 1)) || ((moeda == 'C') && (mov == 3))){
			moeda = 'A';
		}
	} 	
	        
    printf("%c", moeda);        
    
    return 0;
}
