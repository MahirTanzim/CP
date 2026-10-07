import java.util.Scanner;

/**
 * AElephant
 */
public class AElephant {

    static Scanner scanner = new Scanner(System.in);
        
    public static void solution() {
        int n, step =0; n = scanner.nextInt();
        int[] pos = {5, 4, 3, 2, 1};
        for(int i = 0; i < 5; i++){
            step+=(n/pos[i]);
            n%=pos[i];
        }
        System.out.println(step);
    }
        
    public static void main(String[] args) {
        int n = 1;
        // n = scanner.nextInt();
        while (n-- > 0)
        solution();
    }
}