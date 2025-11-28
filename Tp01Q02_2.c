#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    char *string1;
    char *string2;
    bool end=false;
    do{

        string1 = (char*)(malloc(10000*sizeof(char))); // alocando memoria para a variavel
         if (fgets(string1, 10000, stdin) == NULL) {
            end = true; // Se houver erro de leitura ou EOF, terminamos
            continue;
        }

            if(string1[strlen(string1)-1]=='\n'){
                string1[strlen(string1)-1]='\0';
            }

        int i,j;
        int length = strlen(string1);

        string2 = (char*)(malloc((length+1)*sizeof(char)));

        for(i=length-1,j=0;i>=0;i--,j++){
            string2[j]=string1[i]; // copiando o ultimo caractere da string1 para o inicio de string2
        }
        string2[length]='\0';

     if(strcmp(string1,"FIM")!=0){
        if(strcmp(string1,string2)==0){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
        
     }else{
        end=true;
     }

        free(string1);
        free(string2);

    }while(!end);

    return 0;
}