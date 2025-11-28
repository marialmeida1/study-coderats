#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char *string;
    int i;
    
    do{
    int maiusculas = 0;
    string = (char*)(malloc(100*sizeof(char))); // alocando memoria para a variavel
    fgets(string, 100, stdin); // lendo uma linha de entrada e armazenando na memoria
    int strsize=strlen(string);

    for(i=0;i<strsize;i++){
        if(isupper(string[i])){
            maiusculas++;
        }
    }
    printf("%d\n", maiusculas);
}while(string!="FIM");

    return 0;
}
