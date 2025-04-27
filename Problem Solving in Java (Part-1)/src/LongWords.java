import java.util.Scanner;

public class LongWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            String s = sc.next();
            int n = s.length();
            if (n <= 10) {
                System.out.println(s);
            } else {
                System.out.print(s.charAt(0));
                System.out.print(n - 2);
                System.out.println(s.charAt(n - 1));
            }
        }
    }
}
