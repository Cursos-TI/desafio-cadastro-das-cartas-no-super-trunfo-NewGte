
#include <stdio.h>

int main() {
    char carta[30];
    char Estado;
    char Codigo[05];
    char Cidade[50];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int pontosturisticos;
    float densidadepopulacional;
    float pibperCapita;
    float inversodensidade1;
    float superpoder;
 
    char carta2[30];
    char Estado2 [90];
    char Codigo2[05];
    char Cidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float inversodensidade2;
    float superpoder2;

    
    printf("#################________________##################\n");

    printf("#################__SUPER TRUNFO__##################\n");

    printf("*** Olá, vamos adicionar as características das cartas do jogo: ***\n");
    
    printf("Escolha as características da primeira carta.\n");

    printf("Escolha uma letra de A a H para ser a letra inicial do seu estado: \n");
    scanf("%s", &Estado);
     
    printf("Digite o codigo da primeira carta, usando a letra que escolheu mais um numero de 01 a 04: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome de uma cidade para a primeira carta: \n");
    scanf("%s", &Cidade);

    printf("População da cidade da primeira carta: \n");
    scanf("%d", &Populacao);

    printf("Área da primeira cidade: \n");
    scanf("%f", &Area);

    printf("PIB da primeira carta: \n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos túristicos na cidade da primeira carta: \n");
    scanf("%d", &pontosturisticos);

    printf("#################________________##################\n");

    densidadepopulacional = Populacao / Area;

    pibperCapita = PIB / Populacao;

    inversodensidade1 = 1/densidadepopulacional;

    superpoder = Populacao + Area + PIB + pontosturisticos + pibperCapita + inversodensidade1;
     

    printf("#################________________##################\n");

    printf("Agora vamos adicionar as características da segunda carta. \n");

    printf("Escolha uma letra de A a H para ser a letra inicial do seu estado: \n");
    scanf("%s", &Estado2);
     
    printf("Digite o codigo da segunda carta, usando a letra que escolheu mais um numero de 01 a 04: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome de uma cidade: \n");
    scanf("%s", &Cidade2);

    printf("População da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Área da cidade: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos túristicos na cidade: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = Populacao2 / Area2;

    pibpercapita2 = PIB2 / Populacao2;

    inversodensidade2 = 1/densidadepopulacional2;

    superpoder = Populacao2 + Area2 + PIB2 + pontosturisticos2+ pibpercapita2 + inversodensidade2;


    printf("#################________________##################\n");

    printf("carta 1 \n");

    printf("Estado: %C \n", Estado);
    
    printf("Código: %s \n", Codigo);

    printf("Cidade: %s \n", Cidade);

    printf("População: %u \n", Populacao); 

    printf("Área: %.2f KM²\n", Area);

    printf("PIB: %.2f Bilhões de reais\n", PIB);

    printf("Quantidade de pontos turisticos: %d \n", pontosturisticos2);
    
    printf("Densidade populacional: %f hab/km²\n", densidadepopulacional);
    
    printf("PIB per Capita: %f reais\n", pibperCapita);

    printf("Super poder: %.2f \n", superpoder);

    printf("#################________________##################\n");

    printf("carta 2 \n");


    printf("Estado: %C  \n", Estado2);
    
    printf("Código: %s \n", Codigo2);

    printf("Cidade: %s \n", Cidade2);

    printf("População: %u \n", Populacao2); 

    printf("Área: %.2f KM²\n", Area2);

    printf("PIB: %.2f Trilhões de reais\n", PIB2);

    printf("Quantidade de pontos turisticos: %d \n", pontosturisticos2);

    printf("Densidade populacional: %f hab/km²\n", densidadepopulacional2);
    
    printf("PIB per Capita: %u reais\n", pibpercapita2);

    printf("Super poder: %u \n", superpoder2);

printf("#################________________##################\n");

    printf("Comparação das cartas, se receber o valor de (1) carta 1 vence e se receber (0) carta 2 vence.\n");

    printf("População: %f\n", Populacao > Populacao2);

    printf("Área: %f\n", Area > Area2);

    printf("PIB: %f\n", PIB > PIB2);

    printf("Pontos turisticos: %d\n",  pontosturisticos > pontosturisticos2);

    printf("Densidade populacional: %f\n", densidadepopulacional < densidadepopulacional2);

    printf("PIB per capita: %f\n", pibperCapita > pibpercapita2);

    printf("Super poder:%f\n", superpoder > superpoder2);
    
   
    
    
    
    return 0;
}
