// Create a class Num with two instance variables. Using a method swap two numbers.
// Display the values of instance variables using a method before and after the swap operation.

class Num {
    int number1;
    int number2;

    public void swap() {
        number1 = number1 + number2;
        number2 = number1 - number2;
        number1 = number1 - number2;
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
        obj.swap();
        System.out.println("The Numbers after calling the swap() method.");
        obj.display();
    }
}