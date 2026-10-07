import java.util.Scanner;

/**
 * ABit
 */
public class ABit {

    static Scanner scanner = new Scanner(System.in);
        
    public static void solution() {
        int n, cnt=0; n = scanner.nextInt();
        String s; 
        while(n-->0){
            s = scanner.next();
            if(s.charAt(1) == '-')
                cnt--;
            else cnt++;
        }
        System.out.println(cnt);
    }
        
    public static void main(String[] args) {
        int n = 1;
        // n = scanner.nextInt();
        while (n-- > 0)
        solution();
    }
}