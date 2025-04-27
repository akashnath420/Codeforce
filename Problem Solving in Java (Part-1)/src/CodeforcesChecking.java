import java.util.Scanner;

public class CodeforcesChecking {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            char c = sc.next().charAt(0);
            if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's') {
                System.out.println("Yes");
            }
            else {
                System.out.println("No");
            }
        }
    }
}
