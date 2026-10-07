import java.util.Scanner;

/**
 * ASoldierAndBananas
 */
public class ASoldierAndBananas {

    static Scanner scanner = new Scanner(System.in);
        
    public static void solution() {
        int k, n, w;
        k = scanner.nextInt();
        n = scanner.nextInt();
        w = scanner.nextInt();
        int total = 0;
        while(w>0){
            total += k*w;
            w--;
        }
        int borrow = total > n ? total-n : 0;
        System.out.println(borrow);
    }
        
    public static void main(String[] args) {
        int n = 1;
        // n = scanner.nextInt();
        while (n-- > 0)
        solution();
    }
}