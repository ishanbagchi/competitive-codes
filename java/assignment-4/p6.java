// Modify program no. 5 by using call by object reference.

// #5 : 
// Create a class Num with two instance variables. Using a method swap two numbers.
// Display the values of instance variables using a method before and after the swap operation.

class Num {
    int number1;
    int number2;

    public void swap(Num ref) {
        ref.number1 = ref.number1 + ref.number2;
        ref.number2 = ref.number1 - ref.number2;
        ref.number1 = ref.number1 - ref.number2;
    }
    public void display() {
        System.out.println("Number 1: " + number1 + "\nNumber 2: " + number2);
    } 
}

class Main {
    public static void main(String[] args) {
        Num obj = new Num();
        obj.number1 = 5;
        obj.number2 = 10;
        System.out.println("The Numbers before calling the swap() method.");
        obj.display();
        obj.swap(obj);
        System.out.println("The Numbers after calling the swap() method.");
        obj.display();
    }
}