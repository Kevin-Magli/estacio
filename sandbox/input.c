#include <stdio.h>

int main() {
    printf("Ola, Mundo!\n");
    printf("O Print abaixo usa informações dinamicas de variaveis!!!\n");

    char nome[6] = "Kevin";
    char sobrenome[11] = "Magliocchi";
    int idade = 24;

    printf("Meu nome é %s %s. \n", nome, sobrenome);
    printf("Tenho %d anos de idade. \n", idade);
    printf("Resumindo, %s %s, %d anos. \n", nome, sobrenome, idade);

    char novo_nome[11];
    char novo_sobrenome[16];
    int nova_idade;

    printf("\n\nAgora, apresente-se: \n");

    printf("Qual é o seu nome? -> ");
    scanf("%s", novo_nome);
    printf("Belo nome %s!\n", novo_nome);

    printf("E seu sobrenome? -> ");
    scanf("%s", novo_sobrenome);
    printf("Belo sobrenome, %s. Mas o meu é melhor :p hehehe\n", novo_sobrenome);
    
    printf("Quantos anos você tem? -> ");
    scanf("%d", &nova_idade);
    printf("Entendi, %d anos então, que bom!\n", nova_idade);
    
    printf("Então, você é %s %s, tem %d anos de idade. \nPrazer em te conhecer!\n", novo_nome, novo_sobrenome, nova_idade);
    printf("Algo me diz que %s %s combina melhor com você hehe.\n", novo_nome, sobrenome);

    char letra_1 = 'E';
    char letra_2 = 'U';
    char letra_3 = 'T';
    char letra_4 = 'E';
    char letra_5 = 'A';
    char letra_6 = 'M';
    char letra_7 = 'O';

    printf("%c%c %c%c %c%c%c %s sua gatinha maravilhosa.\n",letra_1,letra_2,letra_3,letra_4,letra_5,letra_6,letra_7,novo_nome);
}

// lembra que "\n" dentro de scanf faz com que o enter pra confirmar input fique bugado, use o scanf APENAS pra leitura mesmo, não inventa moda, inventa com printf.
