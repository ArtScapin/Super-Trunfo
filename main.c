#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "baralho.h"
#include "StBib.h"

int main()
{
    srand(time(NULL));
    system("clear");
    
    supertrunfo Jogador1[24], Jogador2[24], mesa[24];
    int proximo, habilidade, ganhou, fim=0;
    
    inserir_baralho();
    embaralhar(10);
    distribuir(Jogador1, Jogador2);
    proximo = sorteio_inicial();
    do{
        habilidade = escolher_habilidade(proximo, Jogador1, Jogador2);
        ganhou = ganhador(Jogador1, Jogador2, habilidade);
        tela(Jogador1, Jogador2, habilidade, proximo, ganhou);
        sistema(Jogador1, Jogador2, mesa);
        getchar();
        system("clear");
    }while(fim!=1);
    
    return 0;
}
