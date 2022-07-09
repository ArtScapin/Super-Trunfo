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