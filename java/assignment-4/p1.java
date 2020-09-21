// Create a class Day. Create a method display() within the class and call the method from main() using object of Day class.

class Day {
    void display() {
        System.out.println("Hello I am from class Day");
    }
}

class Main {
    public static void main(String[] args) {
        Day d = new Day();
        d.display();
    }
}