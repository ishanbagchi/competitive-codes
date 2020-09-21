// Create two classes Day and Night. Create a method named display() with in both the classe Day and Night. Now call the method display() of class Day first and then the class Night from another class.

class Day {
    void display() {
        System.out.println("Hello I am from class Day");
    }
}

class Night {
    void display() {
        System.out.println("Hello I am from class Night");
    }
}

class Main {
    public static void main(String[] args) {
        Day d = new Day();
        d.display();
        Night n = new Night();
        n.display();
    }
}