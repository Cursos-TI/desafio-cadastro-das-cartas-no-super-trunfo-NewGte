#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
#include <stdio.h>

int main() {
    
    char Estado;
    char Codigo[05];
    char Cidade[50];
    int Popúlação;
    float Área;
    float PIB;
    int pontosturaisticos;

    char Estado2;
    char Codigo2[05];
    char Cidade2[50];
    int Popúlação2;
    float Área2;
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
    scanf("%d", &Popúlação);

    printf("Área da primeira cidade: \n");
    scanf("%f", &Área);

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
    scanf("%d", &Popúlação2);

    printf("Área da cidade: \n");
    scanf("%f", &Área2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos túristicos tem na cidade: \n");
    scanf("%d", &pontosturaisticos2);





    printf("carta 1 \n");

    printf("Estado: %C \n", Estado);
    
    printf("Código: %s \n", Codigo);

    printf("Cidade: %s \n", Cidade);

    printf("População: %d \n", Popúlação); 

    printf("Área: %.2f \n", Área);

    printf("PIB: %.2f \n", PIB);

    printf("Quantidade de pontos turisticos: %d \n", pontosturaisticos2);
    



    printf("carta 2 \n");



    printf("Estado: %C \n", Estado2);
    
    printf("Código: %s \n", Codigo2);

    printf("Cidade: %s \n", Cidade2);

    printf("População: %d \n", Popúlação2); 

    printf("Área: %.2f \n", Área2);

    printf("PIB: %.2f \n", PIB2);

    printf("Quantidade de pontos turisticos: %d \n", pontosturaisticos2);
 
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
