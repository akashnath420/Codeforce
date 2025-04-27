import java.util.Scanner;

public class YESorYES {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            String s = sc.next();

            if(s.length() == 3) {
                String uppercase = s.toUpperCase();
                if (uppercase.equals("YES")) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
