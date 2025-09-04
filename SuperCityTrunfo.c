#include <stdio.h>
int main(){
    char estado[20], estado2[20], código[10], código2[10], cidade[20], cidade2[20];
    int população, população2, pontos, pontos2;
    float área, área2, PIB, PIB2;
    float densidade, densidade2, PIBpercapita, PIBpercapita2;
    
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &código);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &população);

    printf("Digite a area em km2: \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Cadastro Realizado com Sucesso!\n");

    densidade = (população / área);
    PIBpercapita = (PIB / população);

     
        printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &código2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &população2);

    printf("Digite a area em km2: \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

    densidade2 = (população2 / área2);
    PIBpercapita2 = (PIB2 / população2);

    printf("Cadastro Realizado com Sucesso!\n");

    printf("  Carta 1\n");
    printf("   Estado: %s\n", estado);
    printf("   Codigo da Carta: %s\n", código);
    printf("   Nome da Cidade: %s\n", cidade);
    printf("   Populacao: %d\n", população);
    printf("   Area em km2: %.0f\n", área);
    printf("   PIB: %.0f\n", PIB);
    printf("   Numero de Pontos Turisticos: %d\n", pontos);
    printf("   Densidade Populacional: %.2f\n", densidade);
    printf("   Pib per capita: %.2f\n", PIBpercapita);

    
    printf("  Carta 2\n");
    printf("   Estado: %s\n", estado2);
    printf("   Codigo da Carta: %s\n", código2);
    printf("   Nome da Cidade: %s\n", cidade2);
    printf("   Populacao: %d\n", população2);
    printf("   Area em km2: %.0f\n", área2);
    printf("   PIB: %.0f\n", PIB2);
    printf("   Numero de Pontos Turisticos: %d\n", pontos2);
    printf("   Densidade Populacional: %.2f\n", densidade2);
    printf("   Pib per capita: %.2f\n", PIBpercapita2);

    
    printf("Cadastro Finalizado, Obrigado!");

    return 0;
}

                                            