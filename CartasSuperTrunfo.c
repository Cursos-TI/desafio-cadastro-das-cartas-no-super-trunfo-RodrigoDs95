#include <stdio.h>

int main() {

    // Aqui eu declarei minhas variaveis, opitei por unir em uma linha os mesmos tipos de variaveis.
    
    int populacao, pontoturistico;
    float area, pib;
    char codigo[5], nome[50];

    // A partir daqui é o processo para o usuario entrar com as informações que abastecerão o banco de dados do programa.

    printf ("Digite o código da cidade: \n");
    scanf("%s", &codigo);

    printf ("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf ("Digite a população da cidade: \n");
    scanf("%i", &populacao);

    printf ("Quantos pontos turísticos tem na cidade? \n");
    scanf("%i", &pontoturistico);

    printf ("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf ("Para finalizar digite o PIB da cidade: \n");
    scanf("%f", &pib);

    // Após coletarmos todas as informações chegou a hora de mostrar os dados para o usuário.
    // Tentei uma formatação mais agradavel aos olhos, dando espaço entre a apresentação da carta e suas caracteristicas.

    printf("\n");
    printf("Os Dados da carta registrada são:\n");
    printf("\n");
    printf("O Código da carta é: %s \n", codigo);
    printf("O Nome da cidade é: %s \n", nome);
    printf("A População é: %i \n", populacao);
    printf("%s possui %i pontos turisticos!\n", nome, pontoturistico);
    printf("Sua área é de %.3f Km² \n", area);
    printf("E o PIB da cidade %s é de %.3f\n", nome, pib);
    return 0;
}
