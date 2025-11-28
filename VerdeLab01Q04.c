#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int contaMaiusculas(char *str,int i);
int main(){
    char *string;
    
    do{
    string = (char*)(malloc(1000*sizeof(char))); // alocando memoria para a variavel
    fgets(string, 1000, stdin); // lendo uma linha de entrada e armazenando na memoria
    int strsize=strlen(string);

    printf("%d\n", contaMaiusculas(string,strsize)); 
}while(strcmp(string,"FIM\n")!=0);

    return 0;
}

int contaMaiusculas(char *str, int i){
    if(i<0 || strcmp(str,"FIM\n")==0){
        if(strcmp(str,"FIM\n")==0){
            exit(0);
        }else{
        return 0;
        }

    }else 
    {
        int maiusc = contaMaiusculas(str,i-1);
    
        if(isupper(str[i]))
        {
            return maiusc+1;
        }else 
        {
            return maiusc;
        }
        
    }
}