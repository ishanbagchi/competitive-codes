import java.util.*;

public class MissingNumber {
    public static void main(String[] args) {

        int total_num;
        int len;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array: ");
        len = sc.nextInt();
        int array[] = new int[len];

        System.out.println("Enter elements of the array:");
        for (int i = 0; i < len - 1; i++) {
            array[i] = sc.nextInt();
        }

        total_num = len - 1;
        int num_sum = (total_num + 1) * (total_num + 2) / 2;
        for (int i = 0; i < len; i++) {
            num_sum -= array[i];
        }
        System.out.print("The missing number is: " + num_sum);
        System.out.print("\n");
    }
}