#include <stdio.h> 

 

int main (){ 

 

    char estado1[50]; 

    char estado2[50]; 

    char codigo1[50]; 

    char codigo2[50]; 

    char cidade1[50]; 

    char cidade2[50]; 

    int população1; 

    int população2; 

    int pontosturisticos1; 

    int pontosturisticos2; 

    float area1; 

    float area2; 

    float pib1; 

    float pib2; 

 

    printf ("Digite o Estado: \n"); 

    scanf ("%s", estado1); 

 

    printf ("Digite o código da carta: \n"); 

    scanf ("%s", codigo1); 

 

    printf ( "Digite o nome da cidade: \n"); 

    scanf ("%s", cidade1); 

 

    printf ( "Digite o número de habitantes da cidade: \n"); 

    scanf ("%d", &população1); 

 

    printf ( "Digite a quantidade de pontos turisticos: \n"); 

    scanf ("%d", &pontosturisticos1); 

 

    printf ( "Digite a área em KM²: \n"); 

    scanf ("%f", &area1); 

 

    printf ( "Digite o PIB: \n"); 

    scanf ("%f", &pib1); 

 

    printf ("Carta 1 cadastrada com sucesso! \n"); 

 

    printf ( "Digite o Estado: \n"); 

    scanf ("%s", estado2); 

 

    printf ("Digite o código da carta: \n"); 

    scanf ("%s", codigo2); 

 

    printf ( "Digite o nome da cidade: \n"); 

    scanf ("%s", cidade2); 

 

    printf ( "Digite o número de habitantes da cidade: \n"); 

    scanf ("%d", &população2); 

 

    printf ( "Digite a quantidade de pontos turisticos: \n"); 

    scanf ("%d", &pontosturisticos2); 

 

    printf ( "Digite a área em KM²: \n"); 

    scanf ("%f", &area2); 

 

    printf ( "Digite o PIB: \n"); 

    scanf ("%f", &pib2); 

 

    printf ("Carta 2 cadastrada com sucesso! \n"); 

 

    printf ("Carta 01:\n"); 

    printf ("Estado: %s\n", estado1); 

    printf ("Código: %s\n", codigo1); 

    printf ("Cidade: %s\n", cidade1); 

    printf ("População: %d\n", população1); 

    printf ("Pontos turisticos: %d\n", pontosturisticos1); 

    printf ("Área em km²: %f\n", area1); 

    printf ("PIB: %f\n", pib1); 

 

    printf ("Carta 02:\n"); 

    printf ("Estado: %s\n", estado2); 

    printf ("Código: %s\n", codigo2); 

    printf ("Cidade: %s\n", cidade2); 

    printf ("População: %d\n", população2); 

    printf ("Pontos turisticos: %d\n", pontosturisticos2); 

    printf ("Área em km²: %f\n", area2); 

    printf ("PIB: %f\n", pib2); 

 

    return 0; 

} 