import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double ans = a + 1.5;

        System.out.printf("%.2f", ans);
    }
}