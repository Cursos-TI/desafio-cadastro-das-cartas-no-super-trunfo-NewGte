
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, opcao2;
   
    char carta[30];
    char Estado;
    char Codigo[50];
    char Cidade[50];
    int Populacao;
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
    int Populacao2;
    float Area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float inversodensidade2;
    float superpoder2;
    printf("Olá, Bem-vindo!!\n");
    printf("Escolha uma das opções seguintes:\n");
    printf("1-INICIAR JOGO\n");
    printf("2-VER REGRAS DO JOGO\n");
    printf("3-SAIR DO MENU... \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:

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


    printf("Estado: %s  \n", Estado2);
    
    printf("Código: %s \n", Codigo2);

    printf("Cidade: %s \n", Cidade2);

    printf("População: %u \n", Populacao2); 

    printf("Área: %.2f KM²\n", Area2);

    printf("PIB: %.2f Trilhões de reais\n", PIB2);

    printf("Quantidade de pontos turisticos: %d \n", pontosturisticos2);

    printf("Densidade populacional: %f hab/km²\n", densidadepopulacional2);
    
    printf("PIB per Capita: %f reais\n", pibpercapita2);

    printf("Super poder: %f \n", superpoder2);

printf("#################________________##################\n");

    printf("Comparação das cartas, se receber o valor de (1) carta 1 vence e se receber (0) carta 2 vence.\n");
    printf("--------\n");
    printf("Agora após selecionar todos os atributos das duas cartas, escolha qual atributo quer comparar\n");
    printf("Seguindo a sequencia de 1 a 7, escolha qual número referente ao atributo quer comparar:\n ");
    printf("Cada número e referente a sequencia apartir da população e finalizando no super poder.\n");
    printf("--------\n");
    printf("A maior pontuação dos tributos ganhar (exceto a densidade o menor ponto ganha)\n");
    printf("-------\n");
    scanf("%d", &opcao2);

   switch(opcao2){
     case 1:
    if (Populacao > Populacao2){ 
        printf(" População: carta 1 venceu!! \n");
    
    } else if (Populacao < Populacao2){
        printf(" População: carta 2 venceu!! \n");
    }   else { 
        printf("Deu empate!/n");
    }
    break;

    case 2:
    if (Area > Area2){ 
        printf(" Área: carta 1 venceu!!\n");
    
    } else if (Area < Area2){
        printf(" Área: carta 2 venceu!!: \n");
    }   else { 
        printf("Deu empate!/n");
    }
    break;

    case 3:
    if (PIB > PIB2){
        printf("PIB: carta 1 venceu!! \n");
    
    } else if (PIB < PIB2){
        printf(" PIB: Carta 2 venceu!! \n");
    } else { 
        printf("Deu empate!/n");
    }
    break;

    case 4:
    if (pontosturisticos > pontosturisticos2){
        printf("Pontos turisticos: carta 1 venceu!!: \n");
    
    } else if (pontosturisticos < pontosturisticos2) {
        printf(" Pontos turisticos: Carta 2 venceu!!:\n");
    } else {
        printf("Deu empate!/n");}
    
    break;

    case 5:
    if (densidadepopulacional > densidadepopulacional2){
        printf("Densidade populacional: carta 1 venceu!!:\n");
    
    } else if(densidadepopulacional < densidadepopulacional2) {
        printf(" Densidade populacional: Carta 2 venceu!!:\n");

    } else  { 
        printf("Deu empate!/n");
    }
    break;
    case 6:
    if (pibperCapita > pibpercapita2){
        printf("PIB per capita: carta 1 venceu!!:\n");
    
    } else if (pibperCapita < pibpercapita2) {
        printf("PIB per capita: Carta 2 venceu!!:\n");
    } else  { 
        printf("Deu empate!/n");
    }
    break;
    case 7:
    if (superpoder > superpoder2)
    {  printf("Super poder: carta 1 venceu!!:\n");}
         else if (superpoder < superpoder2) {
        printf("Super poder: Carta 2 venceu!!:\n");} 
      else  { 
        printf("Deu empate!/n"); }
    break; }
    
    
 break;
 case 2:
 printf("###REGRAS DO JOGO###\n");
 printf("Regra N1°:Escolha cada atributo de cada carta.\n");
 printf("Após escolher cada atributo o jogo irar fazer uma comparação dos atributos que você preferir, no final de cada comparação sairar o resultado do vencedor ou em caso de empate.");
 printf("Regra n2°: O vencedor de cada atributos somarar pontos que no final do jogo mostrar quem foi o vencedor.");
 break;
 case 3:
 printf("###SAINDO-DO-JOGO!###\n");
 break;
 default:
 printf("Opção invalida!\n");
 printf("Tente novamente.\n");
   }



    
    return 0;
}
