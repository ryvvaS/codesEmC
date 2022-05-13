//     Síntese
//  Objetivo: Com base na posição dos postos de água ao longo do percurso, e a distância intermediária máxima de um atleta, determinar se o atleta consegue ou não completar a prova.
//  Entrada : N, M e Limite sao inteiros que representam (número de postos de água, a distância intermediária máxima, o trajeto) respectivamente.
//  Saída   : "S" ou "N" exigencia da questão

#include <stdio.h>

int main(void) {


    int N, i ,M , novoMarcador = 0, distancia, limite = 42195;    // novoMarcador = 0 representa uma marca do atleta

//    printf(" Bem vindo a Maratona!!! ");
    scanf("%d %d", &N, &M);

    for(i = 0; i <N; i++) {
        scanf("%d", &distancia);
        if((distancia - novoMarcador) <= M) 
            novoMarcador = distancia;
    }
    if((limite - novoMarcador) > M)
        printf("N");
    else
        printf("S");

    return 0;
}
