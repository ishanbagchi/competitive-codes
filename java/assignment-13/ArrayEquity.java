import java.util.Scanner;

public class ArrayEquity {
    static void equalityChecking(int[] array1, int[] array2) {
        boolean equalOrNot = true;

        if (array1.length == array2.length) {
            for (int i = 0; i < array1.length; i++) {
                if (array1[i] != array2[i]) {
                    equalOrNot = false;
                }
            }
        } else {
            equalOrNot = false;
        }

        if (equalOrNot) {
            System.out.println("Two arrays are equal.");
        } else {
            System.out.println("Two arrays are not equal.");
        }
    }

    public static void main(String[] args) {
        int len;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of arrays: ");
        len = sc.nextInt();
        int array1[] = new int[len];
        int array2[] = new int[len];

        System.out.println("Enter elements of first array:");
        for (int i = 0; i < len; i++) {
            array1[i] = sc.nextInt();
        }

        System.out.println("Enter elements of second array:");
        for (int i = 0; i < len; i++) {
            array2[i] = sc.nextInt();
        }

        equalityChecking(array1, array2);
    }
}