#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_palindrome(char *str) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    
    while (i < j) {
        // Ignora espaços em branco e caracteres de pontuação
        while (i < j && !isalnum(str[i])) {
            i++;
        }
        while (i < j && !isalnum(str[j])) {
            j--;
        }
        // Converte caracteres para minúsculas para comparação
        if (tolower(str[i]) != tolower(str[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char str[1000];
    
    while (1) {
        fgets(str, sizeof(str), stdin);

        // Remove o caractere de nova linha, se presente
        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }

        // Verifica se a frase é "FIM" e encerra a execução se for
        if (strcmp(str, "FIM") == 0) {
            break;
        }

        // Verifica se a frase é um palíndromo e imprime SIM ou NAO
        if (is_palindrome(str)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}
