#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
int main() {
      
    char Estado;
    char Codigo[10];
    char Cidade[50];
    int Popúlação;
    float Área;
    float PIB;
    int pontosturaisticos = 5;

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado);
     
    printf("Digite o codigo da carta: \n");
    scanf("%S", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("População da cidade: \n");
    scanf("%d", &Popúlação);

    printf("Qual é a área da cidade: \n");
    scanf("%f", &Área);

    printf("Qual é o PIB: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos túristicos tem na cidade?: \n");
    scanf("%d", &pontosturaisticos);
    

    printf("Estado: %C \n", Estado);
    
    printf("Código: %s \n", Codigo);

    printf("Cidade: %s \n", Cidade);

    printf("População: %d \n", Popúlação); 

    printf("Área: %.2f \n", Área);

    printf("PIB: %.2f \n", PIB);

    printf("Quantidade de pontos turisticos: %d \n", pontosturaisticos);
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
