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
    proximo = sorteio_inicial(); //Armazena na variável proximo de acordo com o sorteio qual é o proximo jogador a jogar, 1 ou 2;
    printf("\n\n\n\n");          //Nivela a mensagem "Pressione Enter para continuar..."
    do{
        printf("\nPressione Enter para continuar...");
        getchar();
        system("clear");
        habilidade = escolher_habilidade(proximo, Jogador1[0], Jogador2[0]);
        ganhou = ganhador(Jogador1[0], Jogador2[0], habilidade);
        tela(Jogador1, Jogador2, mesa, habilidade, proximo, ganhou);
        if(ganhou==1 || ganhou==2)  //  Define quem será o proximo a jogar, caso o jogador 1 ou 2 
            proximo=ganhou;         //ganhe, o mesmo escolherá a habilidade na proxima rodada, mas 
        else                        //em caso de empate, o ultimo ganhador passa a vez, pois em  
            proximo=ganhou-proximo; //caso de empate ganhou vale 3 e 3-2=1 ou 3-1=2.
    }while(fim_jogador1!=0 && fim_jogador2!=0);
    if(fim_jogador1!=0)
        printf("\n\nParabens Jogador 1, voce foi o grande VENCEDOR!!!!");
    else
        printf("\n\nParabens Jogador 2, voce foi o grande VENCEDOR!!!!");
    
    return 0;
}
