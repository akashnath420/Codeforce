import java.util.Scanner;

public class Watermelon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int w = sc.nextInt();

        if(w % 2 == 1) {
            System.out.println("No");
        }
        else {
            if(w == 2) {
                System.out.println("No");
            }
            else {
                System.out.println("Yes");
            }
        }
    }
}
