import java.util.Scanner;

/**
 * AWayTooLongWords
 */
public class AWayTooLongWords {

    static Scanner scanner = new Scanner(System.in);
        
    public static void solution() {
        String s; s = scanner.next();
        if(s.length()>10)
            System.out.println(s.charAt(0)+Integer.toString(s.length()-2)+s.charAt(s.length()-1));
        else
            System.out.println(s);
    }
        
    public static void main(String[] args) {
        int n = 1;
        n = scanner.nextInt();
        for(int i = 0; i < n; i++)
            solution();
    }
}