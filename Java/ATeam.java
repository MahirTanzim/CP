import java.util.Scanner;

/**
 * ATeam
 */
public class ATeam {
    static Scanner scanner = new Scanner(System.in);

    public static void solution() {
        int problem, imp=0; problem = scanner.nextInt();
        int a, b, c;
        while(problem-->0){
            
            a = scanner.nextInt();
            b = scanner.nextInt();
            c = scanner.nextInt();
            if(a+b+c>=2)
                imp++;
        }
        System.out.println(imp);

    }

    public static void main(String[] args) {

        int n = 1;
        // n = scanner.nextInt();
        while (n-- > 0)
            solution();
    }

}