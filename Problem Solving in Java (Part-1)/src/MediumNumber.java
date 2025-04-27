import java.util.Scanner;

public class MediumNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            if ((a < b && b < c) || (c < b && b < a)) {
                System.out.println(b);
            } else if ((b < a && a < c) || (c < a && a < b)) {
                System.out.println(a);
            } else {
                System.out.println(c);
            }
        }
    }
}
