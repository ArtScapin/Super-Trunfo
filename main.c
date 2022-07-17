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
    printf("\n\n\n\n");
    do{
        printf("\n\nPressione Enter para continuar...");
        getchar();
        system("clear");
        habilidade = escolher_habilidade(proximo, Jogador1, Jogador2);
        ganhou = ganhador(Jogador1, Jogador2, habilidade);
        tela(Jogador1, Jogador2, mesa, habilidade, proximo, ganhou);
        if(ganhou==1 || ganhou==2)
            proximo=ganhou;
        else
            proximo=ganhou-proximo;
    }while(fim_jogador1!=24 && fim_jogador2!=24);
    system("clear");
    if(fim_jogador1==24)
        printf("Parabens Jogador 1, voce foi o grande VENCEDOR!!!!");
    else
        printf("Parabens Jogador 2, voce foi o grande VENCEDOR!!!!");
    
    return 0;
}
