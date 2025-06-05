#include <stdio.h>

int main (){

//Declarar variaveis

char nome[50]; 
char codigo[50];
char estado[4];
unsigned long int popu; 
float areakm2;
double pib; 
int turismo;

//Declarar variaveis 2
    
char nome2[50]; 
char codigo2[50];
char estado2[4];
unsigned long int popu2; 
float areakm22;
double pib2; 
int turismo2;

// Adicionar valores

printf("Digite uma letra de 'A' a 'H' para definir o Estado 1: ");
fgets(estado, sizeof(estado), stdin);

printf("Digite o código da carta 1: ");
fgets(codigo, 50, stdin);

printf("Digite o nome da Cidade 1: ");
fgets(nome, 50, stdin);

printf("Digite a quantidade da população da Cidade 1: ");
scanf("%lu", &popu);

printf("Digita a área em km² da Cidade 1: ");
scanf("%f", &areakm2);

printf("Digite o PIB da Cidade 1 (Bilhões de Reais): ");
scanf("%lf", &pib);

printf("Digite a quantidade de pontos turisticos da Cidade 1: ");
scanf("%d", &turismo);

printf("\n");

//Limpando Buffer

while (getchar() != '\n');

// Adicionar valores 2
printf("Digite uma letra de 'A' a 'H' para definir o Estado 2: ");
fgets(estado2, sizeof(estado2), stdin);

printf("Digite o código da carta 2: ");
fgets(codigo2, 50, stdin);

printf("Digite o nome da Cidade 2: ");
fgets(nome2, 50, stdin);

printf("Digite a quantidade da população da Cidade 2: ");
scanf("%lu", &popu2);

printf("Digita a área em km² da Cidade 2: ");
scanf("%f", &areakm22);

printf("Digite o PIB da Cidade 2 (Bilhões de Reais): ");
scanf("%lf", &pib2);

printf("Digite a quantidade de pontos turisticos da Cidade 2: ");
scanf("%d", &turismo2);

printf("\n");

//Densidade populacional e PIB per capita da Carta 1
double pibc, pibb;
double dp;
dp = popu/areakm2;
pibb = pib * 1000000000; //Transforma Bilhões de reais em reais, Ex: 1 Bilhão de reais - 1.000.000.000. reais
pibc = pibb/popu; //Calcula o PIB per capita

//Densidade populacional e PIB per capita da Carta 2
double pibc2, pibb2;
double dp2;
dp2 = popu2/areakm22;
pibb2 = pib2 * 1000000000; //Transforma Bilhões de reais em reais, Ex: 1 Bilhão de reais - 1.000.000.000. reais
pibc2 = pibb2/popu2; //Calcula o PIB per capita

//Superpoder (Todas as categorias)
double idp = 1/dp, idp2 = 1/dp2; //Calcula o Inverso da densidade populacional das cartas 1 e 2
double superpoder1 = (double) popu + areakm2 + pib + pibc + turismo + idp; //Calcula o superpoder da carta 1
double superpoder2 = (double) popu2 + areakm22 + pib2 + pibc2 + turismo2 + idp2; //Calcula o superpoder da carta 2

//Introdução a comparação
printf("***COMPARAÇÃO***\n");

printf("\n");

// Apresentar resultados
printf("Carta 1: \n");
printf("Estado: %s", estado);
printf("Código: %s", codigo);
printf("Nome da Cidade: %s", nome);
printf("População: %lu\n", popu);
printf("Área: %.2f Km²\n ", areakm2);
printf("Densidade populacional: %.2lf hab/km²\n", dp);
printf("PIB: %.2lf Bilhões de reais\n ", pib);
printf("PIB per capita: %.2lf Reais\n", pibc);
printf("Número de Pontos Turísticos: %d\n", turismo);

//Pular uma linha
printf("\n");

 // Apresentar resultados 2
 printf("Carta 2: \n");
 printf("Estado: %s", estado2);
 printf("Código: %s", codigo2);
 printf("Nome da Cidade: %s", nome2);
 printf("População: %lu\n", popu2);
 printf("Área: %.2f Km²\n ", areakm22);
 printf("Densidade populacional: %.2lf hab/km²\n", dp2);
 printf("PIB: %.2lf Bilhões de reais\n ", pib2);
 printf("PIB per capita: %.2lf Reais\n", pibc2);
 printf("Número de Pontos Turísticos: %d\n", turismo2);

printf("\n");

//Batalha
int escolha, escolha2;
printf("***BATALHA***\n\n");
printf("Escolha o primeiro atributo de comparação digitando o seu número correspondente:\n1.População;\n2.Área;\n3.Densidade populacional;\n4.PIB;\n5.PIB per capita;\n6.Quantidade de pontos turísticos;\n7.Todas as categorias\n\n.");
    scanf("%d", &escolha);

double atributo11, atributo12, atributo21, atributo22;
switch (escolha) //Escolha do Primeiro Atributo
{
//Definições do Primeiro atributo das cartas 1 e 2
case 1:
//População
atributo11 = popu;
atributo12 = popu2;
break;

case 2:
//Area
atributo11 = areakm2;
atributo12 = areakm22;
break;

case 3:
//Densidade populacional
atributo11 = dp;
atributo12 = dp2;
break;

case 4:
//PIB
atributo11 = pib;
atributo12 = pib2;
break;

case 5:
//PIB per capita
atributo11 = pibc;
atributo12 = pibc2;
break;

case 6:
// Turismo
atributo11 = turismo;
atributo12 = turismo2;
break;

case 7:
//Superpoder (Todas as categorias)
atributo11 = superpoder1;
atributo12 = superpoder2;
break;

default: //Causa opção invalida caso o numero selecionado não esteja entre as opções (1 a 7)
    printf("Opção inválida. Tente novamente e escolha um número de 1 a 7.\n\n");
break;
}

printf("Escolha o Segundo atributo de comparação digitando o seu número correspondente:\n1.População;\n2.Área;\n3.Densidade populacional;\n4.PIB;\n5.PIB per capita;\n6.Quantidade de pontos turísticos;\n7.Todas as categorias\n\n.");
    scanf("%d", &escolha2);
//if que não permite a escolha do mesmo atributo
if (escolha!=escolha2)
{
switch (escolha2) //Escolha do segundo atributo
{
//Definições do Segundo atributo das cartas 1 e 2
case 1:
//População
atributo21 = popu;
atributo22 = popu2;
break;

case 2:
//Area
atributo21 = areakm2;
atributo22 = areakm22;
break;

case 3:
//Densidade populacional
atributo21 = dp;
atributo22 = dp2;
break;

case 4:
//PIB
atributo21 = pib;
atributo22 = pib2;
break;

case 5:
//PIB per capita
atributo21 = pibc;
atributo22 = pibc2;
break;

case 6:
// Turismo
atributo21 = turismo;
atributo22 = turismo2;
break;

case 7:
//Superpoder (Todas as categorias)
atributo21 = superpoder1;
atributo22 = superpoder2;
break;

default: //Causa opção invalida caso o numero selecionado não esteja entre as opções (1 a 7)
    printf("Opção inválida. Tente novamente e escolha um número de 1 a 7.\n\n");
break;
}

double soma1 = atributo11 + atributo21; //Soma o primeiro e o segundo atributo da carta 1
double soma2 = atributo22 + atributo12; //Soma o primeiro e o segundo atributo da carta 2

if((escolha>0 && escolha<8)&&(escolha2>0 && escolha2<8)) //Garante que o jogador só possa selecionar opções de 1 a 7 em relação aos atributos
{
if (soma1>soma2) //Executa caso a carta 1 saia vencedora
{
    printf("\n%s Venceu a partida!\n", nome);
    printf("%s: %.2f\n", nome, soma1);
    printf("%s: %.2f\n", nome2, soma2);
} else if (soma2>soma1) //Executa caso a carta 2 saia vencedora
{
    printf("\n%s Venceu a partida!\n", nome2);
    printf("%s: %.2f\n", nome, soma1);
    printf("%s: %.2f\n", nome2, soma2);
} else //Executa uma ocorre um empate
{
    printf("\nEmpate!\n");
    printf("%s: %.2f\n", nome, soma1);
    printf("%s: %.2f\n", nome2, soma2);
}
} else {
    printf("Uma opção inválida foi selecionada anteriormente.\n");
}
} else { //Ocorre caso o mesmo atributo seja seleciona duas vezes
    printf("Opção inválida: Não é possível escolher o mesmo atributo duas vezes.");
}
 return 0;
}
