import java.util.Random;
import java.util.Scanner;

public class RandomInt {

    public static void main(String[] args) {
        int max;
        Scanner sc = new Scanner(System.in);
        Random random = new Random();
        System.out.println("Enter the maximum value: ");
        max = sc.nextInt();

        for (int i = 1; i < 50; i++) {
            System.out.println(random.nextInt(max));
        }
    }
}