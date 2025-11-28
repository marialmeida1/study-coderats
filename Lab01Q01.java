import java.util.Scanner;

public class Lab01Q01{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str;

        do{
            str = sc.nextLine();
            if(!str.equals("FIM")){
            System.out.println(Lab01Q01.contaMaiusc(str));
            }
        }while(!str.equals("FIM"));
            sc.close();
    }

    public static int contaMaiusc (String str){
        int maiusc = 0;
            for(int i=0;i<str.length();i++){
                if(Character.isUpperCase(str.charAt(i))){
                maiusc++;
                }else if(str.equals("FIM")){
                    return 0;
                }
            }
        return maiusc;
    }
}