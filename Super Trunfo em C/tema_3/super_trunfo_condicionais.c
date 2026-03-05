#include <stdio.h>
#include <string.h>

// Eu tava bem frustrado com a ideia de escrever um codigo onde eu tenho que refazer 8 (ou mais) variaveis pra cada instancia da carta, então aprendi sobre struct e coloquei aqui as declarações com seus tamanhos apropriados, fora da main pra ser usado na função abaixo.
struct Carta {
    char estado[4];
    char cidade[30];
    char codigo[4];
    char cod_estado[10]; 
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    float dens_populacional;
    float pib_per_capita;
};

// Essa função é responsavel por fazer o calculo de densidade populacional e pip per capita para qualquer carta (chamado na main pra executar o calculo)
struct Carta calcularPropriedades(struct Carta c) {
    // Densidade populacional calculado como população / area
    c.dens_populacional = c.populacao / c.area;
    // Pip per capita calculado usando o pib (vezes um bilhão pra ficar correto) / população
    c.pib_per_capita = (c.pib * 1000000000) / c.populacao;
    // retorna a carta com esses valores formatados (o que significa que eu só posso chamar essa função após declarar população, area e pib.)
    return c;
}

void comparar(struct Carta carta1, struct Carta carta2, char atributo[20]) {

    // declaramos as duas variaveis que vão receber os valores de acordo com qual é o atributo
    float valor1, valor2;

    // uma sequencia de if's que atribui os valores corretos de acordo com a string presente em atributo (o que significa que a string tem que ser EXATAMENTE igual ao nome da variavel). O "== 0" é por que strcmp devolve 0 se o atributo e a string sendo comparada foram iguais.
    if (strcmp(atributo, "populacao") == 0) {
        valor1 = (float)carta1.populacao;
        valor2 = (float)carta2.populacao;
    } else if (strcmp(atributo, "area") == 0) {
        valor1 = carta1.area;
        valor2 = carta2.area;
    } else if (strcmp(atributo, "pib") == 0) {
        valor1 = carta1.pib;
        valor2 = carta2.pib;
    } else if (strcmp(atributo, "dens_populacional") == 0) {
        valor1 = carta1.dens_populacional;
        valor2 = carta2.dens_populacional;
    } else if (strcmp(atributo, "pontos_turisticos") == 0) {
        valor1 = carta1.pontos_turisticos;
        valor2 = carta2.pontos_turisticos;
    } else if (strcmp(atributo, "pib_per_capita") == 0) {
        valor1 = carta1.pib_per_capita;
        valor2 = carta2.pib_per_capita;
    } else { // elsezinho só pra garantir e debugar no caso de atributo com str incorreta
        printf("Atributo inválido.\n");
        return;
    }

    // declaramos info 1 e info 2 pra display no terminal de o que exatamente esta em jogo
    char info1[100], info2[100];
    
    // novamente sprintf como template literal usando o valor atribuido pelos if's ali em cima
    sprintf(info1, "Carta %s - %s(%s): %.2f", carta1.codigo, carta1.cidade, carta1.estado, valor1);
    sprintf(info2, "Carta %s - %s(%s): %.2f", carta2.codigo, carta2.cidade, carta2.estado, valor2);
    // resumo da opera
    printf("Comparando %s:\n%s\n%s\n", atributo, info1, info2);

    // declaração da variavel que vai se comportar como bool pra condicional
    int vencedor;

    // a logica aqui é:
    // se a variavel atributo possuir a string "dens_populacional", então a gente usa condicional ternario pra atribuir 1 para vencedor caso de fato ele seja o vencedor, ou 2 caso não seja.
    // se não for dens_populacional, então o mesmo calculo (com comparação invertida) acontece.
    if (strcmp(atributo, "dens_populacional") == 0) {
        vencedor = (valor1 < valor2) ? 1 : 2;
    } else {
        vencedor = (valor1 > valor2) ? 1 : 2;
    }
    
    // if pra display de mensagem de vencedor com o nome da cidade que venceu.
    if (vencedor == 1) {
        printf("O vencedor é %s!!", carta1.cidade);
    } else {
        printf("O vencedor é %s!!", carta2.cidade);
    }
}

int main(){
   
    // declaramos as duas cartas
    struct Carta carta1, carta2;

    // strcpy é usado pra adicionar uma string de maneira simplificada à variavel
    strcpy(carta1.estado, "SP");
    strcpy(carta1.cidade, "São Bernardo Do Campo");
    strcpy(carta1.codigo, "01");
    // sprintf é usado como "template literal" em C juntando as strings de estado com codigo
    sprintf(carta1.cod_estado, "%s%s", carta1.estado, carta1.codigo);
    carta1.populacao = 840499;
    carta1.pontos_turisticos = 35;
    carta1.area = 409.5;
    carta1.pib = 58.2;

    strcpy(carta2.estado, "RS");
    strcpy(carta2.cidade, "Porto Alegre");
    strcpy(carta2.codigo, "02");
    sprintf(carta2.cod_estado, "%s%s", carta2.estado, carta2.codigo);
    carta2.populacao = 1332845;
    carta2.pontos_turisticos = 38;
    carta2.area = 495.3;
    carta2.pib = 104.7;

    // após darmos valores à população, area, pib, aplicamos o calculo de densidade populacional e pib per capita (melhor do que ter que aplicar a conta de novo e de novo varias vezes)
    carta1 = calcularPropriedades(carta1);
    carta2 = calcularPropriedades(carta2);

    // declaramos atributo que vai receber uma string que vai representar um dos atributos
    char atributo[20];
    strcpy(atributo, "pib_per_capita");
    // executamos a função comparar e passamos as duas cartas e um atributo hardcoded de nossa escolha como parametros.
    comparar(carta1, carta2, atributo);

}