#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define BUFFER_SIZE 10000

bool is_palindrome(char *str) {
    int len = strlen(str);
    int i = 0, j = len - 1;

    while (i < j) {
        // Ignora caracteres não alfanuméricos
        while (!isalnum(str[i]) && i < j) {
            i++;
        }
        while (!isalnum(str[j]) && i < j) {
            j--;
        }
        // Verifica se os caracteres são diferentes
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char buffer[BUFFER_SIZE];
    bool end = false;

    do {
        // Leitura de uma linha de cada vez
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL) {
            end = true; // Se houver erro de leitura ou EOF, terminamos
            continue;
        }

        // Remoção do caractere de nova linha, se presente
        size_t length = strlen(buffer);
        if (buffer[length - 1] == '\n') {
            buffer[length - 1] = '\0';
            length--;
        }

        if (strcmp(buffer, "FIM") == 0) {
            end = true; // Se a linha lida for "FIM", terminamos
        } else {
            // Verifica se a frase é um palíndromo e imprime SIM ou NAO
            if (is_palindrome(buffer)) {
                printf("SIM\n");
            } else {
                printf("NAO\n");
            }
        }

    } while (!end);

    return 0;
}
