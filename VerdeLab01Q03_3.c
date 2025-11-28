#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char *string;
    int i;
    
    do{
    int maiusculas = 0;
    string = (char*)(malloc(1000*sizeof(char))); // alocando memoria para a variavel
    fgets(string, 1000, stdin); // lendo uma linha de entrada e armazenando na memoria
    int strsize=strlen(string);

    for(i=0;i<strsize;i++){
        if(isupper(string[i])){
            maiusculas++;
        }
        if(strcmp(string,"FIM\n")==0){
            return 0;
        }
    }
    printf("%d\n", maiusculas);
}while(strcmp(string,"FIM\n")!=0);

    return 0;
}
