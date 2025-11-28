import java.util.Scanner;

public class Lab01Q02{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;

        do {
            str = sc.nextLine();
            if (!str.equals("FIM")) {
                System.out.println(contaMaiusc(str, str.length() - 1)); // Chame o método e imprima o resultado
            }
        } while (!str.equals("FIM"));
        sc.close();
    }    

        public static int contaMaiusc(String str, int i) {
            if (i < 0) { // Se índice for menor que 0, a string foi completamente percorrida
                return 0;
            } else {
                int maiusc = contaMaiusc(str, i - 1); // Chamada recursiva

                if (Character.isUpperCase(str.charAt(i))) {
                    return maiusc + 1; // Incrementa o contador de maiúsculas
                } else {
                    return maiusc; // Mantém o contador
                }
            }
        }
    }

