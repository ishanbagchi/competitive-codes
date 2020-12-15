import java.util.Scanner;

public class AreaOfPentagon {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Input the number of sides: ");
        int n = sc.nextInt();
        System.out.print("Input the side: ");
        double side = sc.nextDouble();

        System.out.println("The area of the pentagon is " + pentagon_area(n, side));
    }

    public static double pentagon_area(int n, double s) {
        return (n * s * s) / (4 * Math.tan(Math.PI / n));
    }
}
