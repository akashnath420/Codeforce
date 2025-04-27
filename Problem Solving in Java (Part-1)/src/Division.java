import java.util.Scanner;

public class Division {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            int rating = sc.nextInt();
            int x = 1;

            if(rating >= 1900) {
                System.out.println("Division "+ x);
            }
            else if(rating >= 1600) {
                x = 2;
                System.out.println("Division "+ x);
            }
            else if(rating >= 1400 ) {
                x = 3;
                System.out.println("Division "+ x);
            }
            else  {
                x = 4;
                System.out.println("Division "+ x);
            }
        }
    }
}
