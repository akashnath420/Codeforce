import java.util.Scanner;

public class DislikeOfThrees {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        int[] num = new int[1001];

        // Generate the sequence of numbers satisfying the "Dislike of Threes" condition
        int a = 1;
        for (int j = 1; j <= 1666; j++) {
            if ((j % 3 != 0) && (j % 10 != 3)) {
                num[a] = j;
                a++;
            }
        }

        // Process each test case
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            System.out.println(num[n]);
        }

        sc.close();
    }
}
