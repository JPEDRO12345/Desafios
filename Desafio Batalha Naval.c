#include <stdio.h>

int dentroDoTabuleiro(int linha, int coluna) { //Usado para verificar os navios foram posicionados dentro dos limites do tabuleiro
    return linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10;
}

int main() {
    int linha, coluna, linha2, coluna2, linha3, coluna3, linha4, coluna4;
    int valoriniciallinha, valorinicialcoluna2, valoriniciallinha3, valorinicialcoluna3, valoriniciallinha4, valorinicialcoluna4;
    char letra = 'A';
    int tabuleiro[10][10] = { {0} };
    int sobreposicao = 0;

    //Mostrar tabuleiro inicial
    printf("###Tabuleiro da batalha naval###\n\n");
    printf("  ");
    for (letra = 65; letra < 75; letra++) { //Coordenadas - Letras de A até J
        printf("%c ", letra);
    }

    for (int a = 1; a <= 10; a++) { //Coordenadas numericas - Linhas de 1 a 10
        printf("\n%d ", a);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[a-1][j]);
        }
    }
    printf("\n\n");

    //Navio Vertical (essas coordenadas definem o ponto mais alto do navio)
    linha = 2;
    coluna = 2;
    valoriniciallinha = linha;
    for (linha = valoriniciallinha; linha < valoriniciallinha + 3; linha++) {
        if (!dentroDoTabuleiro(linha, coluna) || tabuleiro[linha][coluna] != 0) { //Garante que a posição está dentro dos limites do tabuleiro e evita sobreposição de navios, respectivamente
            sobreposicao = 1;
        } else {
            tabuleiro[linha][coluna] = 3; //Marca o navio com 3
        }
    }

    //Navio Horizontal (essas coordenadas definem o ponto mais a esquerda do navio)
    linha2 = 9;
    coluna2 = 7;
    valorinicialcoluna2 = coluna2;
    for (coluna2 = valorinicialcoluna2; coluna2 < valorinicialcoluna2 + 3; coluna2++) {
        if (!dentroDoTabuleiro(linha2, coluna2) || tabuleiro[linha2][coluna2] != 0) { //Garante que a posição está dentro dos limites do tabuleiro e evita sobreposição de navios, respectivamente
            sobreposicao = 1;
        } else {
            tabuleiro[linha2][coluna2] = 3; //Marca o navio com 3
        }
    }

    //Navio Diagonal Principal (essas coordenadas definem o ponto mais alto do navio)
    linha3 = 0;
    coluna3 = 6;
    valoriniciallinha3 = linha3;
    valorinicialcoluna3 = coluna3;
    for (; coluna3 < valorinicialcoluna3 + 3 && linha3 < valoriniciallinha3 + 3; coluna3++, linha3++) {
        if (!dentroDoTabuleiro(linha3, coluna3) || tabuleiro[linha3][coluna3] != 0) { //Garante que a posição está dentro dos limites do tabuleiro e evita sobreposição de navios, respectivamente
            sobreposicao = 1;
        } else {
            tabuleiro[linha3][coluna3] = 3; //Marca o navio com 3
        }
    }

    //Navio Diagonal Secundária (essas coordenadas definem o ponto mais alto do navio)
    linha4 = 5;
    coluna4 = 9;
    valoriniciallinha4 = linha4;
    valorinicialcoluna4 = coluna4;
    for (; coluna4 > valorinicialcoluna4 - 3 && linha4 < valoriniciallinha4 + 3; coluna4--, linha4++) {
        if (!dentroDoTabuleiro(linha4, coluna4) || tabuleiro[linha4][coluna4] != 0) { //Garante que a posição está dentro dos limites do tabuleiro e evita sobreposição de navios, respectivamente
            sobreposicao = 1;
        } else {
            tabuleiro[linha4][coluna4] = 3; //Marca o navio com 3
        }
    }

    if (sobreposicao) {
        printf("Um navio está em cima do outro ou saiu do tabuleiro.\n");
        return 1;
    }

    //Cone - Posição do cone (apartir do ponto mais alto) - Linha deve estar de 0 e 7, já coluna deve estar de 2 a 7
    int escolhalinhacone = 0, escolhacolunacone = 2;
    int escolhacolunaconedef = escolhacolunacone - 2;
    if ((escolhalinhacone >= 0 && escolhalinhacone <= 7) && (escolhacolunacone >= 2 && escolhacolunacone <= 7)) { //Esse if verifica se o cone vai sair da proporção do tabuleiro
        for (int posicaoconelinha = escolhalinhacone; posicaoconelinha < escolhalinhacone + 3; posicaoconelinha++) {
            for (int posicaoconecoluna = 0; posicaoconecoluna < escolhacolunaconedef + 5; posicaoconecoluna++) {
                //Define a forma - Marca o ponto mais alto definido pelo usuario(topo), depois desce uma linha e marca 3 pontos(centro e laterais) e, por fim, desce mais uma linha e marca 5 pontos(base do cone)
                if ((posicaoconelinha == escolhalinhacone && posicaoconecoluna == escolhacolunaconedef + 2) ||
                    (posicaoconelinha == escolhalinhacone + 1 && (posicaoconecoluna >= escolhacolunaconedef + 1 && posicaoconecoluna <= escolhacolunaconedef + 3)) ||
                    (posicaoconelinha == escolhalinhacone + 2 && posicaoconecoluna >= escolhacolunaconedef && posicaoconecoluna <= escolhacolunaconedef + 4)) {
                    if (tabuleiro[posicaoconelinha][posicaoconecoluna] == 3) { //Verifica se já tem um navio (3) e marca como atingido (5)
                        tabuleiro[posicaoconelinha][posicaoconecoluna] = 5; 
                    } else if (tabuleiro[posicaoconelinha][posicaoconecoluna] == 0) { //Se tiver água (0), marca como área do cone (1)
                        tabuleiro[posicaoconelinha][posicaoconecoluna] = 1; 
                    }
                }
            }
        }
    } else {
        printf("\n-O cone não foi definido corretamente.\n");
    }

    //Cruz - Posição da cruz (apartir da posição mais alta) - Linha deve ser de 0 a 7 e Coluna deve ser de 2 a 7 
    int escolhalinhacruz = 5, escolhacolunacruz = 2;
    if ((escolhacolunacruz >= 2 && escolhacolunacruz <= 7) && (escolhalinhacruz >= 0 && escolhalinhacruz <= 7)) { //Esse if verifica se a cruz vai sair da proporção do tabuleiro
        for (int cruzlinha = 0; cruzlinha < escolhalinhacruz + 3; cruzlinha++) {
            //Define a forma - Marca o ponto mais alto definido pelo usuario (ponto central), depois desce uma linha e marca 5 pontos em linha horizontal (braços da cruz) e, por fim, desce uma linha e marca novamente o ponto central
            for (int cruzcoluna = 0; cruzcoluna < escolhacolunacruz + 5; cruzcoluna++) {
                if ((cruzlinha == escolhalinhacruz && cruzcoluna == escolhacolunacruz) ||
                    (cruzlinha == escolhalinhacruz + 1 && (cruzcoluna >= escolhacolunacruz - 2 && cruzcoluna <= escolhacolunacruz + 2)) ||
                    (cruzlinha == escolhalinhacruz + 2 && cruzcoluna == escolhacolunacruz)) {
                    if (tabuleiro[cruzlinha][cruzcoluna] == 3) { //Verifica se já tem um navio (3) e marca como atingido (5)
                        tabuleiro[cruzlinha][cruzcoluna] = 5;
                    } else if (tabuleiro[cruzlinha][cruzcoluna] == 0) { //Se tiver água (0), marca como área do cone (1)
                        tabuleiro[cruzlinha][cruzcoluna] = 1; 
                    }
                }
            }
        }
    } else {
        printf("\n-A cruz não foi definida corretamente.");
    }

    //Octaedro - Posição do octaedro - Linha de ser de 0 a 7 e Coluna deve ser de 1 a 8
    int escolhaoctlinha = 6, escolhaoctcoluna = 7;
    if ((escolhaoctlinha >= 0 && escolhaoctlinha <= 7) && (escolhaoctcoluna >= 1 && escolhaoctcoluna <= 8)) { //Esse if verifica se o octaedro vai sair da proporção do tabuleiro
        for (int octlinha = 0; octlinha < escolhaoctlinha + 3; octlinha++) {
            //Define a forma - Marca o ponto central definido pelo usuario (topo do losango), depois desce uma linha e marca 3 pontos (linha do meio) e, por fim, desce uma linha e marca novamente o ponto central (base do losango)
            for (int octcoluna = 0; octcoluna < escolhaoctcoluna + 5; octcoluna++) {
                if ((octlinha == escolhaoctlinha && octcoluna == escolhaoctcoluna) ||
                    (octlinha == escolhaoctlinha + 1 && (octcoluna >= escolhaoctcoluna - 1 && octcoluna <= escolhaoctcoluna + 1)) ||
                    (octlinha == escolhaoctlinha + 2 && octcoluna == escolhaoctcoluna)) {
                    if (tabuleiro[octlinha][octcoluna] == 3) { //Verifica se já tem um navio (3) e marca como atingido (5)
                        tabuleiro[octlinha][octcoluna] = 5;
                    } else if (tabuleiro[octlinha][octcoluna] == 0) { //Se tiver água (0), marca como área do cone (1)
                        tabuleiro[octlinha][octcoluna] = 1;
                    }
                }
            }
        }
    } else {
        printf("\n-O octaedro não foi definido corretamente.\n");
    }

    //Imprime tabuleiro final
    printf("\n\n###Tabuleiro da batalha naval com navios e efeitos###\n\n");
    printf("  ");
    for (letra = 65; letra < 75; letra++) { //Coordenadas - Letras
        printf("%c ", letra);
    }

    for (int a = 1; a <= 10; a++) { //Coordenadas numericas
        printf("\n%d ", a);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[a-1][j]);
        }
    }
    //Legenda
    printf("\n\n###Legenda###\n\nÁgua = 0\nNavio = 3\nÁrea de efeito de formas geométricas = 1\nÁrea de efeito se navio estiver no caminho = 5\n\n");
    printf("###Para mudar a posição dos navios ou dos efeitos vá para as linhas:\nNavio vertical: Linha 29\nNavio Horizontal: Linha 41\nNavio Diagonal Principal: Linha 53\nNavio Diagonal Secundária: Linha 66\n");
    printf("Cone: Linha 84\nCruz: Linha 106\nOctaedro: Linha 127\n\n");

    return 0;

    /*
    REPRESENTAÇÕES VISUAIS DOS NAVIOS
    Vertical
    Linha 1:     X (Ponto definido pelo usuario)
    Linha 2:     X
    Linha 3:     X

    Horizontal
    Linha única:  X X X (O primeiro ponto dessa linha é o que é definido pelo usuario)

    Diagonal Principal
    Linha 1:     X 0 0 (Ponto definido pelo usuario)
    Linha 2:     0 X 0
    Linha 3:     0 0 X

    Diagonal Secundaria
    Linha 1:     0 0 X (Ponto definido pelo usuario)
    Linha 2:     0 X 0
    Linha 3:     X 0 0

    REPRESENTAÇÕES VISUAIS DAS FIGURAS
    Forma do cone
    Linha 1:   0 0 X 0 0 (Ponto definido pelo usuario)
    Linha 2:   0 X X X 0
    Linha 3:   X X X X X
    
    Forma da cruz
    Linha 1:     0 0 X 0 0 (Ponto definido pelo usuario)
    Linha 2:     X X X X X
    Linha 3:     0 0 X 0 0
    
    Forma do Octaedro
    Linha 1:     0 0 X 0 0 (Ponto definido pelo usuario)
    Linha 2:     0 X X X 0
    Linha 3:     0 0 X 0 0
    */
}