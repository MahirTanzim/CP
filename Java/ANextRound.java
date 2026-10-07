import java.util.ArrayList;
import java.util.Scanner;

/**
 * ANextRound
 */
public class ANextRound {

    static Scanner scanner = new Scanner(System.in);
        
    public static void solution() {
        int n, k;
        n = scanner.nextInt();
        k = scanner.nextInt();
        ArrayList<Integer> a = new ArrayList<>();
        for(int i = 0; i < n; i++)
            a.add(scanner.nextInt());
        int point = a.get(k-1), cnt = 0;

        for(int i =0; i < n; i++)
            if(a.get(i)>=point && a.get(i)!=0) cnt++; 
    
        System.out.println(cnt);
    }

        
    public static void main(String[] args) {
        int tc = 1;
        // tc = scanner.nextInt();
        while (tc-- > 0)
        solution();
    }
}