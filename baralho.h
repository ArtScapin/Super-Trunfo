struct supertrunfo{
    int id;
    char nome[30];
    int supertrunfo;
    int forca;
    int velocidade;
    int inteligencia;
    char categoria;
}trunfo[24];

typedef struct supertrunfo supertrunfo;

void inserir_baralho(){
    trunfo[0].id=1;
    strcpy(trunfo[0].nome, "   Homem de Ferro    ");
    trunfo[0].supertrunfo=1;
    trunfo[0].forca=5;
    trunfo[0].velocidade=6;
    trunfo[0].inteligencia=6;
    trunfo[0].categoria='A';
    
    trunfo[1].id=2;
    strcpy(trunfo[1].nome, "   Capitao America   ");
    trunfo[1].supertrunfo=0;
    trunfo[1].forca=3;
    trunfo[1].velocidade=2;
    trunfo[1].inteligencia=3;
    trunfo[1].categoria='A';
    
    trunfo[2].id=3;
    strcpy(trunfo[2].nome, "        Thor         ");
    trunfo[2].supertrunfo=0;
    trunfo[2].forca=6;
    trunfo[2].velocidade=5;
    trunfo[2].inteligencia=2;
    trunfo[2].categoria='A';
    
    trunfo[3].id=4;
    strcpy(trunfo[3].nome, "        Hulk         ");
    trunfo[3].supertrunfo=0;
    trunfo[3].forca=6;
    trunfo[3].velocidade=5;
    trunfo[3].inteligencia=1;
    trunfo[3].categoria='A';
    
    trunfo[4].id=5;
    strcpy(trunfo[4].nome, "      Nick Fury      ");
    trunfo[4].supertrunfo=0;
    trunfo[4].forca=1;
    trunfo[4].velocidade=2;
    trunfo[4].inteligencia=4;
    trunfo[4].categoria='A';
    
    trunfo[5].id=6;
    strcpy(trunfo[5].nome, "     Viuva Negra     ");
    trunfo[5].supertrunfo=0;
    trunfo[5].forca=2;
    trunfo[5].velocidade=2;
    trunfo[5].inteligencia=3;
    trunfo[5].categoria='A';
    
    trunfo[6].id=7;
    strcpy(trunfo[6].nome, "   Gaviao Arqueiro   ");
    trunfo[6].supertrunfo=0;
    trunfo[6].forca=2;
    trunfo[6].velocidade=2;
    trunfo[6].inteligencia=3;
    trunfo[6].categoria='B';
    
    trunfo[7].id=8;
    strcpy(trunfo[7].nome, "     Agente Hill     ");
    trunfo[7].supertrunfo=0;
    trunfo[7].forca=1;
    trunfo[7].velocidade=1;
    trunfo[7].inteligencia=3;
    trunfo[7].categoria='B';
    
    trunfo[8].id=9;
    strcpy(trunfo[8].nome, "   Agente Coulson   ");
    trunfo[8].supertrunfo=0;
    trunfo[8].forca=2;
    trunfo[8].velocidade=1;
    trunfo[8].inteligencia=2;
    trunfo[8].categoria='B';
    
    trunfo[9].id=10;
    strcpy(trunfo[9].nome, "     Tony Stark      ");
    trunfo[9].supertrunfo=0;
    trunfo[9].forca=1;
    trunfo[9].velocidade=1;
    trunfo[9].inteligencia=6;
    trunfo[9].categoria='B';
    
    trunfo[10].id=11;
    strcpy(trunfo[10].nome, "   Bruce Banner    ");
    trunfo[10].supertrunfo=0;
    trunfo[10].forca=1;
    trunfo[10].velocidade=1;
    trunfo[10].inteligencia=6;
    trunfo[10].categoria='B';
    
    trunfo[11].id=12;
    strcpy(trunfo[11].nome, "       Loki        ");
    trunfo[11].supertrunfo=0;
    trunfo[11].forca=5;
    trunfo[11].velocidade=4;
    trunfo[11].inteligencia=5;
    trunfo[11].categoria='B';
    
    trunfo[12].id=13;
    strcpy(trunfo[12].nome, "  Gigante de Gelo  ");
    trunfo[12].supertrunfo=0;
    trunfo[12].forca=4;
    trunfo[12].velocidade=3;
    trunfo[12].inteligencia=2;
    trunfo[12].categoria='C';
    
    trunfo[13].id=14;
    strcpy(trunfo[13].nome, "    Abominavel     ");
    trunfo[13].supertrunfo=0;
    trunfo[13].forca=6;
    trunfo[13].velocidade=3;
    trunfo[13].inteligencia=3;
    trunfo[13].categoria='C';
    
    trunfo[14].id=15;
    strcpy(trunfo[14].nome, "     Heimdall      ");
    trunfo[14].supertrunfo=0;
    trunfo[14].forca=4;
    trunfo[14].velocidade=3;
    trunfo[14].inteligencia=2;
    trunfo[14].categoria='C';
    
    trunfo[15].id=16;
    strcpy(trunfo[15].nome, " Maquina de Guerra ");
    trunfo[15].supertrunfo=0;
    trunfo[15].forca=5;
    trunfo[15].velocidade=5;
    trunfo[15].inteligencia=3;
    trunfo[15].categoria='C';
    
    trunfo[16].id=17;
    strcpy(trunfo[16].nome, "       Odin        ");
    trunfo[16].supertrunfo=0;
    trunfo[16].forca=5;
    trunfo[16].velocidade=2;
    trunfo[16].inteligencia=6;
    trunfo[16].categoria='C';
    
    trunfo[17].id=18;
    strcpy(trunfo[17].nome, "        Sif        ");
    trunfo[17].supertrunfo=0;
    trunfo[17].forca=4;
    trunfo[17].velocidade=2;
    trunfo[17].inteligencia=3;
    trunfo[17].categoria='C';
    
    trunfo[18].id=19;
    strcpy(trunfo[18].nome, "    Destruidor     ");
    trunfo[18].supertrunfo=0;
    trunfo[18].forca=6;
    trunfo[18].velocidade=4;
    trunfo[18].inteligencia=1;
    trunfo[18].categoria='D';
    
    trunfo[19].id=20;
    strcpy(trunfo[19].nome, " Caveira Vermelha  ");
    trunfo[19].supertrunfo=0;
    trunfo[19].forca=3;
    trunfo[19].velocidade=2;
    trunfo[19].inteligencia=3;
    trunfo[19].categoria='D';
    
    trunfo[20].id=21;
    strcpy(trunfo[20].nome, "   Soldado Hidra   ");
    trunfo[20].supertrunfo=0;
    trunfo[20].forca=2;
    trunfo[20].velocidade=1;
    trunfo[20].inteligencia=2;
    trunfo[20].categoria='D';
    
    trunfo[21].id=22;
    strcpy(trunfo[21].nome, "   Chicote Negro   ");
    trunfo[21].supertrunfo=0;
    trunfo[21].forca=2;
    trunfo[21].velocidade=2;
    trunfo[21].inteligencia=6;
    trunfo[21].categoria='D';
    
    trunfo[22].id=23;
    strcpy(trunfo[22].nome, "  Monge de Ferro   ");
    trunfo[22].supertrunfo=0;
    trunfo[22].forca=5;
    trunfo[22].velocidade=4;
    trunfo[22].inteligencia=4;
    trunfo[22].categoria='D';
    
    trunfo[23].id=24;
    strcpy(trunfo[23].nome, "     Leviathan     ");
    trunfo[23].supertrunfo=0;
    trunfo[23].forca=5;
    trunfo[23].velocidade=5;
    trunfo[23].inteligencia=1;
    trunfo[23].categoria='D';
}
