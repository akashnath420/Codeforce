import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);



        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                int n = sc.nextInt();
                if(n == 1) {
                    System.out.println(Math.abs(i - 3) + Math.abs(j - 3));
                }
            }
        }
    }
}
