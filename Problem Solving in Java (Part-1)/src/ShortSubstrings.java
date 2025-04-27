import java.util.Scanner;

public class ShortSubstrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++) {
            String s = sc.next();
            StringBuilder result = new StringBuilder();

            // Append the first character
            result.append(s.charAt(0));

            // Iterate through the string, skipping every other character
            for(int j = 1; j < s.length() - 1; j += 2) {
                result.append(s.charAt(j));
            }

            // Append the last character
            result.append(s.charAt(s.length() - 1));

            System.out.println(result.toString());
        }
    }
}
