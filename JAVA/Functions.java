import java.util.*;

public class Functions
{
    public static void printMyName(String name)
    {
        System.out.println(name);
        return ;
    }

    public static int sumOfTwoNumber(int m, int n)
    {
        int p = m + n;
        
        return p;
    }

    public static void main(String arg[])
    {
        // Scanner sc = new Scanner(System.in);
        // String name = sc.next(); 

        // printMyName(name);

        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int n = sc.nextInt();

        System.out.println("Sum of 2 number is : " + sumOfTwoNumber(m, n));
    }
}