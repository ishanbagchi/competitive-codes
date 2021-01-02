public class RemoveFromArray {
    void remove(int arr[])

    public static void main(String[] args) {
        int len, deleteNum, flag = 1, loc = 0;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        len = sc.nextInt();
        int arr[] = new int[len];

        System.out.println("Enter all the elements:");
        for (int i = 0; i < len; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Original Array: " + Arrays.toString(arr));

        System.out.print("Enter the element you want to delete: ");
        deleteNum = sc.nextInt();
        for (int i = 0; i < len; i++) {
            if (arr[i] == deleteNum) {
                flag = 1;
                loc = i;
                break;
            } else {
                flag = 0;
            }
        }
        if (flag == 1) {
            for (int i = loc + 1; i < len; i++) {
                arr[i - 1] = arr[i];
            }
            System.out.print("After Deleting: ");
            for (int i = 0; i < len - 2; i++) {
                System.out.print(arr[i] + ", ");
            }
            System.out.println(arr[len - 2]);
        } else {
            System.out.println("Element not found");
        }
    }
}
