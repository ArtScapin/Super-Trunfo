void embaralhar(int n){                     //  Embaralha o trunfo através de uma 'desordenação' de vetores,
    supertrunfo aux;                        //sorteando um valor aleatorio para a variavel a e alterando as
    int a;                                  //as posições do array com a posição i, n vezes.
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < 24; i++) {
            aux=trunfo[i];
            a=rand()%24;
            trunfo[i]=trunfo[a];
            trunfo[a]=aux;
        }
    }
}

void distribuir(supertrunfo Jogador1[24], supertrunfo Jogador2[24]){
    for (int i = 0; i < 24; i++) {          //  Distribui metade do baralho de trunfo para a mão de cada jogador.
        if(i<12)
            Jogador1[i]=trunfo[i];
        else
            Jogador2[i-12]=trunfo[i];
    }
}

int sorteio_inicial(){                      //  Decide quais dos jogadores iniciará jogando atravez de um jogo de
    int a, b, c;                            //par ou ímpar. A variável c decide quem será par e quem será ímpar,
    a = (rand()%5)+1;                       //caso seu valor seja 0, jogador 1 será par e jogador 2 será ímpar, já
    b = (rand()%5)+1;                       //se for 1, o contrário acontece. Já as variáveis a e b representam os
    c = (rand()%2);                         //dedos das mãos dos jogadores 1 e 2 e variam de 1 a 5. A função retorna
    if(c==0){                               //o número referente ao jogador que irá começar.
            printf("     Jogador 1  \t\t\t\t    Jogador 2\n");
            printf("\tPAR \t\t\t\t\t      IMPAR\n\n");
    }else{
            printf("     Jogador 1  \t\t\t\t    Jogador 2\n");
            printf("       IMPAR\t\t\t\t\t       PAR\n\n");
    }
            printf("\t %d\t\t\t\t\t\t%d\n", a, b);
            if((a+b)%2==0)
                printf("\t\t\t     PAR!!\n\n");
            else    
                printf("\t\t\t    IMPAR!!\n\n");
    if((a+b)%2==0){
        if(c==0){
            printf("\t\t      Jogador 1 Comecara!\n");
            return 1;
        }else{
            printf("\t\t      Jogador 2 Comecara!\n");
            return 2;
        }
    }else{
        if(c==1){
            printf("\t\t      Jogador 1 Comecara!\n");
            return 2;
        }else{
            printf("\t\t      Jogador 2 Comecara!\n");
            return 1;
        }
    }  
}

int escolher_habilidade(int proximo, supertrunfo Jogador1, supertrunfo Jogador2){                   //  Recebe as cartas dos dois jogadores e qual jogador será 
    if(proximo==1){                                                                                 //o proximo a jogar. Com estas informações, analiza a carta
        if(Jogador1.forca>=Jogador1.velocidade && Jogador1.forca>=Jogador1.inteligencia)            //do proximo a jogar e determina qual habilidade será
            return 1;                                                                               //analizada na proxima rodada.
        else if(Jogador1.velocidade>=Jogador1.forca && Jogador1.velocidade>=Jogador1.inteligencia)
            return 2;
        else if(Jogador1.inteligencia>=Jogador1.forca && Jogador1.inteligencia>=Jogador1.velocidade)
            return 3;
    }else if(proximo==2){
        if(Jogador2.forca>=Jogador2.velocidade && Jogador2.forca>=Jogador2.inteligencia)
            return 1;
        else if(Jogador2.velocidade>=Jogador2.forca && Jogador2.velocidade>=Jogador2.inteligencia)
            return 2;
        else if(Jogador2.inteligencia>=Jogador2.forca && Jogador2.inteligencia>=Jogador2.velocidade)
            return 3;
    }
}

int ganhador(supertrunfo Jogador1, supertrunfo Jogador2, int habilidade){   //  Recebe as cartas dos dois jogadores e a habilidade
    if(Jogador1.supertrunfo==0 && Jogador2.supertrunfo==0){                 //escolhida. Com estas informações, analiza os valores
        switch(habilidade){                                                 //da habilidade das duas cartas e retorna o vencedor,
            case 1:                                                         //caso empate, retorna 3. Em caso de supertrunfo, o
                if(Jogador1.forca>Jogador2.forca)                           //vencedor é o dono do mesmo exceto em caso do adversário
                    return 1;                                               //possuir uma carta da categoria A.
                else if(Jogador1.forca<Jogador2.forca)
                    return 2;
                else
                    return 3;
            case 2:
                if(Jogador1.velocidade>Jogador2.velocidade)
                    return 1;
                else if(Jogador1.velocidade<Jogador2.velocidade)
                    return 2;
                else
                    return 3;
            case 3:
                if(Jogador1.inteligencia>Jogador2.inteligencia)
                    return 1;
                else if(Jogador1.inteligencia<Jogador2.inteligencia)
                    return 2;
                else
                    return 3;
        }
    }else{
        if(Jogador1.supertrunfo==1){
            if(Jogador2.categoria=='A'){
                return 2;
            }else{
                return 1;
            }
        }else{
            if(Jogador1.categoria=='A'){
                return 1;
            }else{
                return 2;
            }
        }
    }
}

int fim_mesa;
int fim_jogador1;
int fim_jogador2;

void sistema(supertrunfo Jogador1[24], supertrunfo Jogador2[24], supertrunfo mesa[24], int ganhou){
    int i;                                          //  Função responsável pelo funcionamento de toda a
    mesa[fim_mesa]=Jogador1[0];                     //mecânica do jogo. Recebe as mãos dos dois jogadores.
    fim_mesa++;                                     //a mesa, e o ganhador. Em todos os casos, coloca as
    mesa[fim_mesa]=Jogador2[0];                     //cartas em jogo na mesa, e em caso de houver um ganhador
    fim_mesa++;                                     //transfere as cartas da mesa para o mesmo, se não, as 
    for (i = 0; i < 24; i++) {                      //mantem na mesa até que alguém ganhe a rodada e receba
        Jogador1[i]=Jogador1[i+1];                  //todas as cartas da mesa.
        Jogador2[i]=Jogador2[i+1];
    }
    fim_jogador1--;
    fim_jogador2--;
    switch(ganhou){
        case 1:
            for (i = 0; i < fim_mesa; i++) {
                Jogador1[fim_jogador1]=mesa[i];
                fim_jogador1++;
            }
            fim_mesa=0;
            break;
        case 2:
            for (i = 0; i < fim_mesa; i++) {
                Jogador2[fim_jogador2]=mesa[i];
                fim_jogador2++;
            }
            fim_mesa=0;
            break;
    }
}

void tela(supertrunfo Jogador1[24], supertrunfo Jogador2[24], supertrunfo mesa[24], int habilidade, int proximo, int ganhou){
    printf("     Jogador 1  \t\t\t\t    Jogador 2\n");         //Mostra o que esta acontecendo na tela.
    switch(habilidade){
        case 1:
            printf("\t\t\t      FORCA\n");;
            break;
        case 2:
            printf("\t\t\t    VELOCIDADE\n");
            break;
        case 3:
            printf("\t\t\t   INTELIGENCIA\n");
            break;
    }
    printf("%s\t\t\t\t%s\n", Jogador1[0].nome, Jogador2[0].nome);
    if(Jogador1[0].supertrunfo==1 || Jogador2[0].supertrunfo==1){
        if(Jogador1[0].supertrunfo==1)
            printf("    SUPER-TRUNFO     \t\t\t\t  Categoria:      %c  \n", Jogador2[0].categoria);
        else
            printf("  Categoria:      %c  \t\t\t\t    SUPER-TRUNFO     \n", Jogador1[0].categoria);
    }else{
        printf("  Categoria:      %c  \t\t\t\t  Categoria:      %c  \n", Jogador1[0].categoria, Jogador2[0].categoria);
    }
    
    printf("  Forca:          %d  \t\t\t\t  Forca:          %d  \n", Jogador1[0].forca, Jogador2[0].forca);
    printf("  Velocidade:     %d  \t\t\t\t  Velocidade:     %d  \n", Jogador1[0].velocidade, Jogador2[0].velocidade);
    printf("  Inteligencia:   %d  \t\t\t\t  Inteligencia:   %d  \n\n", Jogador1[0].inteligencia, Jogador2[0].inteligencia);
    if(ganhou==1)
        printf("\t\t    Jogador 1 Ganhou a rodada!\n");
    else if(ganhou==2)
        printf("\t\t    Jogador 2 Ganhou a rodada!\n");
    else
        printf("\t\t         Empatou a rodada! \n");
    sistema(Jogador1, Jogador2, mesa, ganhou); //Esta função foi colocada aqui pois foi a melhor maneira que eu encontrei para mostrar os dados atualizados.
    printf("\n    Cartas: ");
    if(fim_jogador1<10)
        printf("0");
    printf("%d          Cartas na mesa: ", fim_jogador1);
    if(fim_mesa<10)
        printf("0");
    printf("%d          Cartas: ", fim_mesa);
    if(fim_jogador2<10)
        printf("0");
    printf("%d\n", fim_jogador2);
}
