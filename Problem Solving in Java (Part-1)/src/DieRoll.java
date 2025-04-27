import java.util.Scanner;

public class DieRoll {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        String [] probability = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};

        int max = Math.max(a, b);
        System.out.println(probability[max]);
    }
}
