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

//Adicionar valores
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

//Adicionar valores 2
printf("Digite uma letra de 'A' a 'H' para definir o Estado 2: ");
fgets(estado2, sizeof(estado2), stdin);

printf("Digite o código da carta 2: ");
fgets(codigo2, 50, stdin);

printf("Digite o nome da Cidade 2: ");
fgets(nome2, 50, stdin);

printf("Digite a quantidade da população da Cidade 2: ");
scanf("%lu", &popu2);

printf("Digite a área em km² da Cidade 2: ");
scanf("%f", &areakm22);

printf("Digite o PIB da Cidade 2 (Bilhões de Reais): ");
scanf("%lf", &pib2);

printf("Digite a quantidade de pontos turisticos da Cidade 2: ");
scanf("%d", &turismo2);

//Impressão de mensagens e informações ao jogador
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

//Introdução a comparação
printf("***COMPARAÇÃO***\n");
printf("\n");

//Apresenta resultados
//Impressão de mensagens e informações ao jogador
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

printf("\n");

//Apresenta resultados 2
//Impressão de mensagens e informações ao jogador
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

// Impressão de mensagens e informações ao jogador
printf("\n");

//Batalha
// Impressão de mensagens e informações ao jogador
printf("***BATALHA***\n");
printf("\n");

printf("A população de %s (%lu habitantes) é maior que a de %s (%lu habitantes): %d.\n", nome, popu, nome2, popu2, popu > popu2);
printf("\n");

printf("A área de %s (%.2f km²) é maior que a de %s (%.2f km²): %d.\n", nome, areakm2, nome2, areakm22, areakm2 > areakm22);
printf("\n");

printf("A Densidade populacional de %s (%.2lf hab/km²) é menor que a de %s (%.2lf hab/km²): %d.\n", nome, dp, nome2, dp2, dp < dp2);
printf("\n");

printf("O PIB de %s (%lf Bilhões de reais) é maior que o de %s (%lf Bilhões de reais): %d.\n", nome, pib, nome2, pib2, (float) pib > pib2);
printf("\n");

printf("O PIB per capita de %s (%lf Reais) é maior que o de %s (%lf Reais): %d.\n", nome, pibc, nome2, pibc2, (float) pibc > pibc2);
printf("\n");

printf("O número de pontos Turísticos de %s (%d) é maior que o de %s (%d): %d.\n", nome, turismo, nome2, turismo2, turismo > turismo2);
printf("\n");
printf("\n");

//Super Poder
double idp = 1/dp, idp2 = 1/dp2; //Calcula o Inverso da densidade populacional das cartas 1 e 2
double superpoder1 = (double) popu + areakm2 + pib + pibc + turismo + idp; //Calcula o superpoder da carta 1
double superpoder2 = (double) popu2 + areakm22 + pib2 + pibc2 + turismo2 + idp2; //Calcula o superpoder da carta 2

printf("O Super Poder de %s (%.2f pontos) é mais forte que o de %s (%.2lf pontos): %d.\n", nome, superpoder1, nome2, superpoder2, superpoder1 > superpoder2);
printf("\n");

//Variaveis dos pontos das cartas
int ponto_populacao = popu > popu2;
int ponto_area = areakm2 > areakm22;
int ponto_densidade = dp < dp2;
int ponto_pib = (float)pib > pib2;
int ponto_pibpc = (float)pibc > pibc2;
int ponto_turismo = turismo > turismo2;
int ponto_superpoder = superpoder1 > superpoder2;
//Resultado
printf("Resultado: %d\n", ponto_populacao + ponto_area + ponto_densidade + ponto_pib + ponto_pibpc + ponto_turismo + ponto_superpoder); //Calcula e mostra os pontos
printf("Se o resultado for maior ou igual a 4: Carta 1 - %s\nSe o resultado for menor que 4: Carta 2 - %s",nome,nome2);

 return 0;
}