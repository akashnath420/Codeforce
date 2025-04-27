import java.util.Scanner;

public class Lucky {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            String s = sc.next();
            int Frist3Number = 0;
            int Last3Number = 0;
            for(int j = 0; j < 3; j++) {
                int Number = Integer.parseInt(String.valueOf(s.charAt(j)));
                Frist3Number+=Number;
            }
            for(int j = s.length() - 1; j >= 3; j--) {
                int Number = Integer.parseInt(String.valueOf(s.charAt(j)));
                Last3Number+=Number;
            }
            if(Frist3Number == Last3Number) {
                System.out.println("Yes");
            }
            else {
                System.out.println("No");
            }
        }
    }
}
