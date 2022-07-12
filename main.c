#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "baralho.h"
#include "StBib.h"

int fim_mesa=0;
int fim_jogador1=12;
int fim_jogador2=12;

int main()
{
    srand(time(NULL));
    system("clear");
    
    supertrunfo Jogador1[24], Jogador2[24], mesa[24];
    int proximo, habilidade, ganhou;
    
    inserir_baralho();
    embaralhar(10);
    distribuir(Jogador1, Jogador2);
    proximo = sorteio_inicial();
    do{
        habilidade = escolher_habilidade(proximo, Jogador1, Jogador2);
        ganhou = ganhador(Jogador1, Jogador2, habilidade);
        tela(Jogador1, Jogador2, habilidade, proximo, ganhou);
        sistema(Jogador1, Jogador2, mesa, ganhou);
        if(ganhou==1 || ganhou==2)
            proximo=ganhou;
        else
            proximo=ganhou-proximo;
        getchar();
        system("clear");
    }while(fim_jogador1!=24 && fim_jogador2!=24);
    
    return 0;
}
