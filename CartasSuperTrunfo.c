
#include <stdio.h>

int main() {
    
    char Estado;
    char Codigo[05];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int pontosturaisticos;

    char Estado2;
    char Codigo2[05];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int pontosturaisticos2;

    printf("Olá, vamos adicionar as caracteristicas das cartas do jogo: \n");

    printf("Escolha uma letra de A a H para ser a letra inicial do seu estado: \n");
    scanf("%s", &Estado);
     
    printf("Digite o codigo da primeira carta sendo com a letra que escolheu mais um numero de 01 a 04: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome de uma cidade para a primeira carta: \n");
    scanf("%s", &Cidade);

    printf("População da cidade da primeira carta: \n");
    scanf("%d", &Populacao);

    printf("Área da primeira cidade: \n");
    scanf("%f", &Area);

    printf("PIB da primeira carta: \n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos túristicos tem na cidade da primeira carta: \n");
    scanf("%d", &pontosturaisticos);





    printf("Agora vamos adicionar as caracteristicas da carta 2. \n");


    printf("Escolha uma letra de A a H para ser a letra inicial do seu estado: \n");
    scanf("%s", &Estado2);
     
    printf("Digite o codigo da segunda carta sendo com a letra que escolheu mais um numero de 01 a 04: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome de uma cidade: \n");
    scanf("%s", &Cidade2);

    printf("População da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Área da cidade: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos túristicos tem na cidade: \n");
    scanf("%d", &pontosturaisticos2);





    printf("carta 1 \n");

    printf("Estado: %C \n", Estado);
    
    printf("Código: %s \n", Codigo);

    printf("Cidade: %s \n", Cidade);

    printf("População: %d \n", Populacao); 

    printf("Área: %.2f \n", Area);

    printf("PIB: %.2f \n", PIB);

    printf("Quantidade de pontos turisticos: %d \n", pontosturaisticos2);
    



    printf("carta 2 \n");



    printf("Estado: %C \n", Estado2);
    
    printf("Código: %s \n", Codigo2);

    printf("Cidade: %s \n", Cidade2);

    printf("População: %d \n", Populacao2); 

    printf("Área: %.2f \n", Area2);

    printf("PIB: %.2f \n", PIB2);

    printf("Quantidade de pontos turisticos: %d \n", pontosturaisticos2);
 
    return 0;
}
