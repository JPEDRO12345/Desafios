#include <stdio.h>

//Movimento da Torre
void torreRecursiva(int passo, int limite) { //Função recursiva que simula o movimento da torre
    if (passo >= limite) return; //Condição de parada
    printf("Direita\n");
    if ((passo + 1) % 5 == 0) { //Pula uma linha a cada 5 passos
        printf("\n");
    }
    torreRecursiva(passo + 1, limite);
}

void torre(int numero) { //Função principal que controla quantas vezes a torre se move
    printf("Movimento da Torre:\n");
    for (int i = 0; i < numero; i++) {  //Responsavel por repetir o movimento da torre "numero" vezes
        torreRecursiva(0, 5); //5 passos para a "direita" por "numero"
    }
    printf("\n");
}

//Movimento do Bispo
void bispoRecursivo(int i, int limite) { //Função recursiva que simula o movimento do bispo
    if (i >= limite) return; //Condição de parada
    printf("Cima, Direita\n");
    printf("\n");
    bispoRecursivo(i + 1, limite); //Chamada com incremento - Resposavel pelo numero de vezes que o movimento é executado
}

void bispo(int numero) { //Função principal do bispo
    printf("Movimento do Bispo:\n");
    bispoRecursivo(0, numero); //Inicia com 0 até o limite definido
    printf("\n");
}

//Movimento da Rainha
void rainhaRecursiva(int passo, int limite) { //Função recursiva que simula o movimento da rainha
    if (passo >= limite) return;
    printf("Esquerda\n");
    if ((passo + 1) % 8 == 0) { //Pula uma linha a cada 8 passos
        printf("\n");
    }
    rainhaRecursiva(passo + 1, limite); //Próximo passo
}

void rainha(int numero) { //Função principal da rainha
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < numero; i++) { //Repete o movimento completo "numero" vezes
        rainhaRecursiva(0, 8); //8 passos
    }
    printf("\n");
}

//Movimento do Cavalo (V. complexo)
void Cavalo(int numero) {
    printf("Movimento do Cavalo:\n");
    for (int movimento = 0; movimento < numero; movimento++) { //Repete o padrão de movimento "numero" vezes
        for (int i = 0; i < 2; i++) { //Faz o movimento "Cima" duas vezes
            int j = 0;
            while (j < 1) {
                printf("Cima\n");
                j++;
            }
        }
        printf("Direita\n\n");  //Depois dos movimentos "Cima", move "Direita"
    }
}


int main() {
    //O número entre parênteses define a quantidade de execuções
    torre(1); //1 equivale a 5 movimentos para a direita
    bispo(1); //1 equivale a 1 movimento Cima, Direita
    rainha(1); //1 equivale a 8 movimentos para a esquerda
    Cavalo(1); //1 equivale a 1 movimento Cima, Cima, Diretia
}