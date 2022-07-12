void embaralhar(int n){
    supertrunfo aux;
    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 24; j++) {
            aux=trunfo[j];
            a=rand()%24;
            trunfo[j]=trunfo[a];
            trunfo[a]=aux;
        }
    }
}

void distribuir(supertrunfo Jogador1[24], supertrunfo Jogador2[24]){
    for (int i = 0; i < 24; i++) {
        if(i<12)
            Jogador1[i]=trunfo[i];
        else
            Jogador2[i-12]=trunfo[i];
    }
}

int sorteio_inicial(){
    int a, b, c;
    a = (rand()%5)+1;
    b = (rand()%5)+1;
    c = (rand()%5)+1;
    if(c%2==0){
            printf("     Jogador 1                                      Jogador 2     \n");
            printf("        PAR                                           IMPAR       \n\n");
    }else{
            printf("     Jogador 1                                      Jogador 2     \n");
            printf("        PAR                                           IMPAR       \n\n");
    }
            printf("         %d                     +                        %d         \n", a, b);
            printf("                               %d                                  \n\n", a+b);
    if((a+b)%2==0){
        if(c%2==0){
            printf("                       Jogador 1 Comecara!                        \n");
            return 1;
        }else{
            printf("                       Jogador 2 Comecara!                        \n");
            return 2;
        }
    }else{
        if(c%2==0){
            printf("                       Jogador 2 Comecara!                        \n");
            return 2;
        }else{
            printf("                       Jogador 1 Comecara!                        \n");
            return 1;
        }
    }  
}

int escolher_habilidade(int proximo, supertrunfo Jogador1[24], supertrunfo Jogador2[24]){
    if(proximo==1){
        if(Jogador1[0].forca>=Jogador1[0].velocidade && Jogador1[0].forca>=Jogador1[0].inteligencia)
            return 1;
        else if(Jogador1[0].velocidade>=Jogador1[0].forca && Jogador1[0].velocidade>=Jogador1[0].inteligencia)
            return 2;
        else if(Jogador1[0].inteligencia>=Jogador1[0].forca && Jogador1[0].inteligencia>=Jogador1[0].velocidade)
            return 3;
    }else if(proximo==2){
        if(Jogador2[0].forca>=Jogador2[0].velocidade && Jogador2[0].forca>=Jogador2[0].inteligencia)
            return 1;
        else if(Jogador2[0].velocidade>=Jogador2[0].forca && Jogador2[0].velocidade>=Jogador2[0].inteligencia)
            return 2;
        else if(Jogador2[0].inteligencia>=Jogador2[0].forca && Jogador2[0].inteligencia>=Jogador2[0].velocidade)
            return 3;
    }
}

int ganhador(supertrunfo Jogador1[24], supertrunfo Jogador2[24], int habilidade){
    if(Jogador1[0].supertrunfo==0 && Jogador2[0].supertrunfo==0){
        switch(habilidade){
            case 1:
                if(Jogador1[0].forca>Jogador2[0].forca)
                    return 1;
                else if(Jogador1[0].forca<Jogador2[0].forca)
                    return 2;
                else
                    return 0;
            case 2:
                if(Jogador1[0].velocidade>Jogador2[0].velocidade)
                    return 1;
                else if(Jogador1[0].velocidade<Jogador2[0].velocidade)
                    return 2;
                else
                    return 0;
            case 3:
                if(Jogador1[0].inteligencia>Jogador2[0].inteligencia)
                    return 1;
                else if(Jogador1[0].inteligencia<Jogador2[0].inteligencia)
                    return 2;
                else
                    return 0;
        }
    }else{
        if(Jogador1[0].supertrunfo==1){
            if(Jogador2[0].categoria=='A'){
                return 2;
            }else{
                return 1;
            }
        }else{
            if(Jogador1[0].categoria=='A'){
                return 1;
            }else{
                return 2;
            }
        }
    }
}

void sistema(supertrunfo Jogador1[24], supertrunfo Jogador2[24], supertrunfo mesa[24]){
    
}

void tela(supertrunfo Jogador1[24], supertrunfo Jogador2[24], int habilidade, int proximo, int ganhou){
    printf("     Jogador 1                                      Jogador 2     \n");
    switch(habilidade){
        case 1:
            if(proximo==1)
                printf("       FORCA                                                      \n");
            else
                printf("                                                      FORCA       \n");
            break;
        case 2:
            if(proximo==1)
                printf("    VELOCIDADE                                                    \n");
            else
                printf("                                                   VELOCIDADE     \n");
            break;
        case 3:
            if(proximo==1)
                printf("   INTELIGENCIA                                                   \n");
            else
                printf("                                                  INTELIGENCIA    \n");
            break;
    }
    for (int i = 0; i < 19; i++)
        printf("%c", Jogador1[0].nome[i]);
    printf("                            ");
    for (int i = 0; i < 19; i++)
        printf("%c", Jogador2[0].nome[i]);
    printf("\n");
    printf(" Forca:          %d                               Forca:          %d\n", Jogador1[0].forca, Jogador2[0].forca);
    printf(" Velocidade:     %d                               Velocidade:     %d\n", Jogador1[0].velocidade, Jogador2[0].velocidade);
    printf(" Inteligencia:   %d                               Inteligencia:   %d\n", Jogador1[0].inteligencia, Jogador2[0].inteligencia);
    if(ganhou==1)
        printf("                    Jogador 1 Ganhou a rodada!                    \n");
    else if(ganhou==2)
        printf("                    Jogador 2 Ganhou a rodada!                    \n");
    else
        printf("                         Empatou a rodada!                        \n");
}
