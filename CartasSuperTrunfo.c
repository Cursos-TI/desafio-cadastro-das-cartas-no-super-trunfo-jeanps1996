#include <stdio.h>

int main() {

    //Carta 01

    char estado[50];
    char codigoestado[50];
    char cidade[50];
    int populacao, pontoturistico;
    float area, pib, densidadepopulacional, pibpercapita, superpoder;

    printf("Carta 01 \n");

    printf("Digite o nome do estado: ");
    scanf("%s ", &estado);

    printf("Digite o código do estado: ");
    scanf("%s ", &codigoestado);

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d ", &pontoturistico);

    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;


    printf("Estado: %s\n", estado);
    printf("Código do estado: %s\n", codigoestado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontoturistico);
    printf("Densidade populacional: %.2f\n", densidadepopulacional);
    printf("Pib percapita: %.2f\n", pibpercapita);

    //Carta 02

    printf("Carta 02 \n");

    char estado_2[50];
    char codigoestado_2[50];
    char cidade_2[50];
    int populacao_2, pontoturistico_2;
    float area_2, pib_2, densidadepopulacional_2, pibpercapita_2, superpoder_2;



    printf("Digite o nome do estado: ");
    scanf("%s ", &estado_2);

    printf("Digite o código do estado: ");
    scanf("%s ", &codigoestado_2);

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", &cidade_2);

    printf("Digite a população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área: ");
    scanf("%f", &area_2);

    printf("Digite o pib: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico_2);

    densidadepopulacional_2 = populacao_2 / area_2;
    pibpercapita_2 = pib_2 / populacao_2;
   


    printf("Estado: %s\n", estado_2);
    printf("Código do estado: %s\n", codigoestado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f\n", area_2);
    printf("Pib: %.2f\n", pib_2);
    printf("Pontos turísticos: %df\n", pontoturistico_2);
    printf("Densidade populacional: %.2f\n", (float)densidadepopulacional_2);
    printf("Pib percapita: %.2f\n", (float)pibpercapita_2);


return 0;
}

