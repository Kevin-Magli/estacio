#include <stdio.h>

int main(){
    int number = 99;
    int quantity = 14;
    int idade;

    char letra = 'x'; // salva UM unico caracter
    char nome[6] = "Kevin"; // o nome vai ter 6 caracteres, ou seja, uma pra cada letra do nome + o caracter invisivel que indica o fim da string.
    char sobrenome[11];

    // sobrenome = "Magliocchi"; // da erro, a string (array de char) só pode ser colocado na variavel durante a declaração, pois uma string em C é uma constante. Outro jeito de fazer isso dar certo é com strcpy(variavel, "valor"), uma biblioteca de string.h que é usada para fazer essa atribuição.
    idade = 24;
}

