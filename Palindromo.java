
import java.util.Scanner;
public class Palindromo {
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLine()){
        String str1=sc.nextLine();//Ler a palavra e atribuir à string1 
        if(str1.equals("FIM"))
            {break;}
        String str2="";//string2 é inicializada com vazio para que possa ser construída posteriormente como o inverso da string1
        
        for(int i=str1.length()-1;i>=0;i--){//laço for para fazer com que cada caractere da string2 seja atribuido inversamente como os da string1
            str2+=str1.charAt(i);//a string1 começa a ser lida pelo seu último caractere, atribuindo, um a um, de trás para frente, à string2
        }
        boolean palindrome = str1.equals(str2);// cria-se uma variável booleana a fim de conferir se a string inversa é igual a original
        if(palindrome){//Caso o retorno seja TRUE, SIM é impresso na tela, pois é um Palíndromo.
            System.out.println("SIM");
            }else{//Caso o retorno seja FALSE, NÃO é impresso na tela.
                System.out.println("NAO");
        }
    }
        sc.close();//fecha-se o scanner.
    }
}
