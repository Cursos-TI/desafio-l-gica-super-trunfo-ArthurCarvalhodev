#include <stdio.h>

#include <string.h>

// Estrutura da carta
typedef struct {
    char estado[3];          // Ex: "SP"
    char codigo[5];          // Ex: "A01"
    char nomeCidade[50];     // Ex: "São Paulo"
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;


int main() {
     // Cadastro das cartas -------------------------
    Carta carta1;
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 800000000000.0;
    carta1.pontosTuristicos = 50;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    Carta carta2;
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "B01");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6000000;
    carta2.area = 1182.30;
    carta2.pib = 360000000000.0;
    carta2.pontosTuristicos = 40;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Escolha do atributo para comparação -------------------------
    // Troque aqui para "populacao", "area", "pib", "densidadePopulacional", etc.
    printf("Comparacao de cartas (Atributo: PIB per capita)\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

    // Comparação -------------------------
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
