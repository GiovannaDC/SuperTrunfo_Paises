/*
----------------------------------------------------------------------------------------------------------
Programa: Super Trunfo Países 

Desafio: Nível Novato - Criação de Cartas Super Trunfo

Autora: Giovanna Karoline 

Data: Setembro de 2025
----------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    //Super Trunfo - Carta 1 
    char estado1; //Digite uma letra representativa de 'A' a 'H'.
    char codigo1 [5]; //Digite o código da carta (letra + número de '1' a '4', ex: B03).
    char nomeCidade1 [25];
    int população1;
    float PIB1;
    int pontosTuristícos1;
    
    //Super Trunfo - Carta 2
    char estado2; //Digite uma letra representativa de 'A' a 'H'.
    char codigo2 [5]; //Digite o código da carta (letra + número de '1' a '4', ex: G02).
    char nomeCidade2 [25];
    int população2;
    float PIB2;
    int pontosTuristícos2;
    
    
    //Solicita Dados - Estado 1 
    printf ("Letra representativa - Estado 1 (letra de 'A' a 'H'): \n");
    scanf ("%c, &estado1: \n");
    
    printf ("Código da Carta: \n");
    scanf ("%d, &codigo1: \n");
    
    printf ("Nome da Cidade: \n");
    scanf ("%s, &nomeCidade1: \n");
    
    printf ("População: \n");
    scanf ("%d, &população1: \n");
    
    printf ("PIB: \n");
    scanf ("%.3f, &PIB1: \n");
    
    printf ("Pontos Turistícos: \n");
    scanf ("%d, &pontosTuristícos1: \n\n");
    
    
     //Solicita Dados - Estado 2 
    printf ("Letra representativa - Estado 2 (letra de 'A' a 'H'): \n");
    scanf ("%c, &estado2: \n");
    
    printf ("Código da Carta: \n");
    scanf ("%d, &codigo2: \n");
    
    printf ("Nome da Cidade: \n");
    scanf ("%s, &nomeCidade2: \n");
    
    printf ("População: \n");
    scanf ("%d, &população2: \n");
    
    printf ("PIB: \n");
    scanf ("%.3f, &PIB2: \n");
    
    printf ("Pontos Turistícos: \n");
    scanf ("%d, &pontosTuristícos2: \n");
    
    
    return 0;
    
    
}