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
    
    supertrunfo Jogador1[24], Jogador2[24];
    
    inserir_baralho();
    embaralhar(10);
    distribuir(Jogador1, Jogador2);
    return 0;
}
